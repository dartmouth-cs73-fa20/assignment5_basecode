cmake_minimum_required(VERSION 3.1)
project(a5)

add_subdirectory(src/ext)

# include directories
include_directories(${PROJECT_SOURCE_DIR}/src
                    ${PROJECT_SOURCE_DIR}/src/ext
                    ${PROJECT_SOURCE_DIR}/src/ext/stb
)

set(ext_stb_srcs
    src/ext/stb/stb_image_write.h
    src/ext/stb/stb_image.h
)

add_definitions(-DDATA_DIR=R\"\(${PROJECT_SOURCE_DIR}/data\)\")

set(common_srcs
    src/array3D.h
    src/exceptions.h
    src/floatimage.cpp
    src/floatimage.h
    src/utils.h
)

# Compile common library
add_library(common_lib STATIC
    ${common_srcs}
    ${ext_stb_srcs}
)
SOURCE_GROUP("src\\ext\\stb" FILES ${ext_stb_srcs})

set(a5_srcs    src/a5_main.cpp src/hdr.cpp src/filtering.cpp src/a2.cpp)    # a5
add_executable(a5 ${a5_srcs})                                               # a5
target_link_libraries(a5 common_lib)                                        # a5
SOURCE_GROUP("src" FILES ${a5_srcs})                                        # a5
                                                                            # a5

# Create the output data directory
add_custom_command(TARGET a5 POST_BUILD COMMAND ${CMAKE_COMMAND} -E make_directory "${PROJECT_SOURCE_DIR}/data/output") # a5