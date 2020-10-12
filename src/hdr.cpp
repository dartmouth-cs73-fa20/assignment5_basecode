// hdr.cpp
// Assignment 5


#include "hdr.h"
#include "filtering.h"
#include "a2.h"
#include "utils.h"
#include <math.h>
#include <algorithm>

using namespace std;

/**************************************************************
 //                       HDR MERGING                        //
 *************************************************************/

// Generate a weight image that indicates which pixels are good to use in hdr
FloatImage computeWeight(const FloatImage &im, float epsilonMini, float epsilonMaxi)
{
	// should return an image with pixel values = 1 if im(...) falls
	// in the range [epsilonMini, epsilonMaxi]
	return FloatImage(); // change this
}

// Compute the multiplication factor between a pair of images
float computeFactor(const FloatImage &im1, const FloatImage &w1, const FloatImage &im2, const FloatImage &w2)
{
	vector<float> ratio;

	// populate list with ratios of im1 and im2 for all valid pixels

	// return midpoint of ratio list
	return 1.0f; // change this
}

// Merge images to make a single hdr image
FloatImage makeHDR(vector<FloatImage> &imSeq, float epsilonMini, float epsilonMaxi)
{
	// invert gamma correction
	for (int i = 0; i < ((int) imSeq.size()); i++)
		imSeq[i] = changeGamma(imSeq[i], 1.0 / 2.2, 1.0f);

	// NOTE: do not change gamma back
	return FloatImage(); // change this
}

/**************************************************************
 //                      TONE MAPPING                        //
 *************************************************************/


// Tone map an hdr image
FloatImage toneMap(const FloatImage &im, float targetBase, float detailAmp, bool useBila, float sigmaRange)
{
	// UNCOMMENT THIS LINE!
	// add gamma correction back into the image right before returning
	//outImage = changeGamma(outImage, 1.0f, 1/2.2);

	// return
	return FloatImage(); // change this
}



// Tone Mapping Helpful Functions

// image --> log10FloatImage
FloatImage log10FloatImage(const FloatImage &im)
{
	// Taking a linear image im, transform to log10 scale.
	// To avoid infinity issues, make any 0-valued pixel be equal the the minimum
	// non-zero value. See image_minnonzero(im).
	return FloatImage(); // change this
}

// FloatImage --> 10^FloatImage
FloatImage exp10FloatImage(const FloatImage &im)
{
	// take an image in log10 domain and transform it back to linear domain.
	// see pow(a, b)
	return FloatImage(); // change this
}

// min non-zero pixel value of image
float image_minnonzero(const FloatImage &im)
{
	return 1.0f; // change this
}
