/*
 * InputManager.cpp
 *
 *  Created on: 22 Jun 2016
 *      Author: jan
 */

#include "InputManager.h"

namespace JTEngine {

InputManager::InputManager() {
	// TODO Auto-generated constructor stub

}

InputManager::~InputManager() {
	// TODO Auto-generated destructor stub
}

void InputManager::pressKey(unsigned int keyID) {
	_keyMap[keyID] = true;
}

void InputManager::releaseKey(unsigned int keyID) {
	_keyMap[keyID] = false;
}

bool InputManager::isKeyPressed(unsigned int keyID) {
	auto it = _keyMap.find(keyID);
	if(it != _keyMap.end()) {
		return it->second;
	}
	return false;
}

} /* namespace JTEngine */
