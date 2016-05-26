/*
 * picoPNG.h
 *
 *  Created on: 23 May 2016
 *      Author: jan
 */

#ifndef PICOPNG_H_
#define PICOPNG_H_

#include <vector>

namespace JTEngine {

extern int decodePNG(std::vector<unsigned char>& out_image, unsigned long& image_width, unsigned long& image_height, const unsigned char* in_png, size_t in_size, bool convert_to_rgba32 = true);

} /* namespace JTEngine */

#endif /* PICOPNG_H_ */
