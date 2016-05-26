/*
 * Window.h
 *
 *  Created on: 25 May 2016
 *      Author: jan
 */

#ifndef WINDOW_H_
#define WINDOW_H_

#include <SDL2/SDL.h>
#include <GL/glew.h>
#include <string>

namespace JTEngine {

enum WindowFlags {INVISIBLE = 0x1, FULLSCREEN = 0x2, BORDERLESS = 0x4};

class Window {
public:
	Window();
	virtual ~Window();

	int create(std::string windowName, int screenWidth, int screenHeight, unsigned int currentFlags);

	void swapBuffer();

	int getScreenWidth();
	int getScreenHeight();

private:
	SDL_Window* _sdlWindow;
	int _screenWidth;
	int _screenHeight;
};

} /* namespace JTEngine */

#endif /* WINDOW_H_ */
