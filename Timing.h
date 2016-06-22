/*
 * Timing.h
 *
 *  Created on: 22 Jun 2016
 *      Author: jan
 */

#ifndef TIMING_H_
#define TIMING_H_

#include <SDL2/SDL.h>

namespace JTEngine {

class FpsLimiter {
public:
	FpsLimiter();
	void init(float maxFPS);

	void setMaxFPS(float maxFPS);

	void begin();

	// end will return the current FPS
	float end();

private:
	void calculateFPS();

	float _fps;
	float _maxFPS;
	float _frameTime;
	unsigned int _startTicks;

};

} /* namespace JTEngine */

#endif /* TIMING_H_ */
