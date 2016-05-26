/*
 * ResourceManager.cpp
 *
 *  Created on: 25 May 2016
 *      Author: jan
 */

#include "ResourceManager.h"

namespace JTEngine {

TextureCache ResourceManager::_textureCache;


GLTexture ResourceManager::getTexture(std::string texturePath) {
	return _textureCache.getTexture(texturePath);
}

} /* namespace JTEngine */
