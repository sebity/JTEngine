#include <cstdlib>
#include <iostream>
#include <SDL2/SDL.h>

#include "Errors.h"

namespace JTEngine {

// Prints out an error message and exits the game.
//
void fatalError(std::string errorString) {
	std::cout << errorString << std::endl;
	std::cout << "Enter any key to quit...";
	int tmp;
	std::cin >> tmp;
	SDL_Quit();
	exit(1);
}

} /* namespace JTEngine */
