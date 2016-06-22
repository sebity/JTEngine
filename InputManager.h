/*
 * InputManager.h
 *
 *  Created on: 22 Jun 2016
 *      Author: jan
 */

#ifndef INPUTMANAGER_H_
#define INPUTMANAGER_H_

#include <unordered_map>

namespace JTEngine {

class InputManager {
public:
	InputManager();
	virtual ~InputManager();

	void pressKey(unsigned int keyID);
	void releaseKey(unsigned int keyID);

	bool isKeyPressed(unsigned int keyID);

private:
	std::unordered_map<unsigned int, bool> _keyMap;
};

} /* namespace JTEngine */

#endif /* INPUTMANAGER_H_ */
