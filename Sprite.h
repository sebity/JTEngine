/*
 * Sprite.h
 *
 *  Created on: 22 May 2016
 *      Author: jan
 */

#ifndef SPRITE_H_
#define SPRITE_H_

#include <GL/glew.h>
#include <string>

#include "GLTexture.h"

namespace JTEngine {

class Sprite {
public:
	Sprite();
	virtual ~Sprite();

	void init(float x, float y, float width, float height, std::string texturePath);

	void draw();

private:
	int _x;
	int _y;
	int _width;
	int _height;
	GLuint _vboID;
	GLTexture _texture;
};

} /* namespace JTEngine */

#endif /* SPRITE_H_ */
