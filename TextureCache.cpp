/*
 * TextureCache.cpp
 *
 *  Created on: 25 May 2016
 *      Author: jan
 */

#include <iostream>

#include "TextureCache.h"
#include "ImageLoader.h"

namespace JTEngine {

TextureCache::TextureCache() {
	// TODO Auto-generated constructor stub

}

TextureCache::~TextureCache() {
	// TODO Auto-generated destructor stub
}

GLTexture TextureCache::getTexture(std::string texturePath) {
	// lookup the texture and see if its in the map
	// replace -> std::map<std::string, GLTexture>::iterator, with auto
	auto mit = _textureMap.find(texturePath);

	// check if its not in the map
	if(mit == _textureMap.end()) {
		// Load the texture
		GLTexture newTexture = ImageLoader::loadPNG(texturePath);

		std::pair<std::string, GLTexture> newPair(texturePath, newTexture);

		_textureMap.insert(newPair);

		//std::cout << "Loaded Texture!\n";

		return newTexture;
	}
	//std::cout << "Loaded Cached Texture!\n";

	return mit->second;
}

} /* namespace JTEngine */
