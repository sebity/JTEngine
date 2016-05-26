/*
 * Window.cpp
 *
 *  Created on: 25 May 2016
 *      Author: jan
 */

#include <iostream>

#include "Window.h"
#include "Errors.h"

namespace JTEngine {

Window::Window() : _sdlWindow(nullptr), _screenWidth(1024), _screenHeight(768) {

}

Window::~Window() {

}

int Window::create(std::string windowName, int screenWidth, int screenHeight, unsigned int currentFlags) {

	Uint32 flags = SDL_WINDOW_OPENGL;

	if (currentFlags & INVISIBLE) {
		flags |= SDL_WINDOW_HIDDEN;
	}

	if (currentFlags & FULLSCREEN) {
		flags |= SDL_WINDOW_FULLSCREEN;
	}

	if (currentFlags & BORDERLESS) {
		flags |= SDL_WINDOW_BORDERLESS;
	}

	// Open an SDL window
	_sdlWindow = SDL_CreateWindow(windowName.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
			screenWidth, screenHeight, flags);

	if(_sdlWindow == nullptr) {
		fatalError("SDL Window could not be created!");
	}

	// Setup the OpenGL context
	SDL_GLContext glContext = SDL_GL_CreateContext(_sdlWindow);
	if(glContext == nullptr) {
		fatalError("SDL_GL context could not be created!");
	}

	// Setup the GLEW
	GLenum error = glewInit();
	if(error != GLEW_OK) {
		fatalError("Could not initialise glew!");
	}

	// Check the OpenGL version
	std::cout << "*** OpenGL Version: " << glGetString(GL_VERSION) << " ***";

	// Set the background color.
	glClearColor(0.0f, 0.0f, 1.0f, 1.0f);

	// Set VSYNC
	SDL_GL_SetSwapInterval(0);

	return 0;
}

// Return screen width
int Window::getScreenWidth() {
	return _screenWidth;
}

// Return screen height
int Window::getScreenHeight() {
	return _screenHeight;
}

void Window::swapBuffer() {
	SDL_GL_SwapWindow(_sdlWindow);
}

} /* namespace JTEngine */
