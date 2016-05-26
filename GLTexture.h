/*
 * GLTexture.h
 *
 *  Created on: 23 May 2016
 *      Author: jan
 */

#ifndef GLTEXTURE_H_
#define GLTEXTURE_H_

#include <GL/glew.h>

namespace JTEngine {

struct GLTexture {
	GLuint id;
	int width;
	int height;
};

} /* namespace JTEngine */

#endif /* GLTEXTURE_H_ */
