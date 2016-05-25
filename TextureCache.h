/*
 * TextureCache.h
 *
 *  Created on: 25 May 2016
 *      Author: jan
 */

#ifndef TEXTURECACHE_H_
#define TEXTURECACHE_H_

#include <map>

#include "GLTexture.h"

class TextureCache {
public:
	TextureCache();
	virtual ~TextureCache();

	GLTexture getTexture(std::string texturePath);

private:
	std::map<std::string, GLTexture> _textureMap;
};

#endif /* TEXTURECACHE_H_ */
