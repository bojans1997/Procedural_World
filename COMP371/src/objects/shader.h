#pragma once

#ifndef SHADER_H
#define SHADER_H

#include <glad.h>
#include <glm.hpp>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

// Based on learnopengl's https://learnopengl.com/Getting-started/Shaders

class Shader
{
public:
	unsigned int ID;

	Shader(const char* vertexPath, const char* fragmentPath);
	void use();
	void setMat4(const std::string &name, const glm::mat4 &mat) const;
	void setVec3(const std::string &name, const glm::vec3 &value) const;
	void setVec3(const std::string &name, float x, float y, float z) const;
	void setFloat(const std::string &name, const float &value) const;
	void setInt(const std::string &name, int value) const;
private:
	void checkCompileErrors(unsigned int shader, std::string type);
};
#endif