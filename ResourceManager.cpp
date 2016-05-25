/*
 * ResourceManager.cpp
 *
 *  Created on: 25 May 2016
 *      Author: jan
 */

#include "../JTEngine/ResourceManager.h"

TextureCache ResourceManager::_textureCache;


GLTexture ResourceManager::getTexture(std::string texturePath) {
	return _textureCache.getTexture(texturePath);
}
