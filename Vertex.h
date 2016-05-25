/*
 * Vertex.h
 *
 *  Created on: 23 May 2016
 *      Author: jan
 */

#ifndef VERTEX_H_
#define VERTEX_H_

#include <GL/glew.h>

struct Position {
	float x;
	float y;
};

struct Color {
	GLubyte r;
	GLubyte g;
	GLubyte b;
	GLubyte a;
};

struct UV {
	float u;
	float v;
};


// The Vertex definition
struct Vertex {
	Position position;

	// 4 bytes for r g b a colour.
	Color color;

	// UV texture coordinates
    UV uv;

    void setPosition(float x, float y) {
    	position.x = x;
    	position.y = y;
    }

    void setColor(GLubyte r, GLubyte g, GLubyte b, GLubyte a) {
    	color.r = r;
    	color.g = g;
    	color.b = b;
    	color.a = a;
    }

    void setUV(float u, float v) {
    	uv.u = u;
    	uv.v = v;
    }
};



#endif /* VERTEX_H_ */
