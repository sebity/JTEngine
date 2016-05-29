/*
 * Camera2D.h
 *
 *  Created on: 27 May 2016
 *      Author: jan
 */

#ifndef CAMERA2D_H_
#define CAMERA2D_H_

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

namespace JTEngine {

class Camera2D {
public:
	Camera2D();
	virtual ~Camera2D();

	void init(int _screenWidth, int _screenHeight);

	void update();

	// setters
	void setPosition(const glm::vec2& newPosition) { _position = newPosition; _needsMatrixUpdate = true; }
	void setScale(float newScale) { _scale = newScale;  _needsMatrixUpdate = true; }

	// getters
	glm::vec2 getPosition() { return _position; }
	float getScale() { return _scale; }
	glm::mat4 getCameraMatrix() { return _cameraMatrix; }

private:
	int _screenWidth, _screenHeight;
	bool _needsMatrixUpdate;
	float _scale;
	glm::vec2 _position;
	glm::mat4 _cameraMatrix;
	glm::mat4 _orthoMatrix;
};

} /* namespace JTEngine */

#endif /* CAMERA2D_H_ */
