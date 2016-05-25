/*
 * GLSLProgram.h
 *
 *  Created on: 22 May 2016
 *      Author: jan
 */

#ifndef GLSLPROGRAM_H_
#define GLSLPROGRAM_H_

#include <string>
#include <GL/glew.h>

class GLSLProgram {
public:
	GLSLProgram();
	virtual ~GLSLProgram();

	void compileShaders(const std::string& vertexShaderFilePath, const std::string& fragmentShaderFilePath);

	void linkShaders();

	void addAttribute(const std::string& attributeName);

	GLint getUniformLocation(const std::string& uniformName);

	void use();
	void unuse();

private:
	int _numAttributes;

	void compileShader(const std::string& filePath, GLuint& id);

	GLuint _programID;

	GLuint _vertexShaderID;
	GLuint _fragmentShaderID;
};

#endif /* GLSLPROGRAM_H_ */
