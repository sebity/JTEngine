/*
 * JTEngine.cpp
 *
 *  Created on: 26 May 2016
 *      Author: jan
 */

#include <SDL2/SDL.h>
#include <GL/glew.h>

#include "JTEngine.h"

namespace JTEngine {

int init() {
	// Initialise SDL
	SDL_Init(SDL_INIT_EVERYTHING);

	// Enable double buffering to stop any flickering on the screen.
	SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);

	return 0;
}

} /* namespace JTEngine */
