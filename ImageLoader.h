/*
 * ImageLoader.h
 *
 *  Created on: 23 May 2016
 *      Author: jan
 */

#ifndef IMAGELOADER_H_
#define IMAGELOADER_H_

#include <string>
#include "GLTexture.h"


class ImageLoader {
public:
	static GLTexture loadPNG(std::string filePath);
};

#endif /* IMAGELOADER_H_ */
