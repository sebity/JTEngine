/*
 * InputManager.h
 *
 *  Created on: 22 Jun 2016
 *      Author: jan
 */

#ifndef INPUTMANAGER_H_
#define INPUTMANAGER_H_

#include <unordered_map>
#include <glm/glm.hpp>

namespace JTEngine {

class InputManager {
public:
	InputManager();
	virtual ~InputManager();

	void pressKey(unsigned int keyID);
	void releaseKey(unsigned int keyID);

	void setMouseCoords(float x, float y);

	bool isKeyPressed(unsigned int keyID);

	glm::vec2 getMouseCoords() const { return _mouseCoords; };

private:
	std::unordered_map<unsigned int, bool> _keyMap;
	glm::vec2 _mouseCoords;
};

} /* namespace JTEngine */

#endif /* INPUTMANAGER_H_ */
