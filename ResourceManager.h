/*
 * ResourceManager.h
 *
 *  Created on: 25 May 2016
 *      Author: jan
 */

#ifndef RESOURCEMANAGER_H_
#define RESOURCEMANAGER_H_

#include <string>
#include "TextureCache.h"

namespace JTEngine {

class ResourceManager {
public:
	static GLTexture getTexture(std::string texturePath);

private:
	static TextureCache _textureCache;
};

} /* namespace JTEngine */

#endif /* RESOURCEMANAGER_H_ */
