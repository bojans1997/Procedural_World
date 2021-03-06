#pragma once

#ifndef PAIR_H
#define PAIR_H

#include <glad.h>
#include <glfw3.h>
#include <glm.hpp>
#include <gtc/matrix_transform.hpp>
#include <gtc/type_ptr.hpp>
#include <iostream>
#include <vector>
#include "../stb_image.h"
#include "shader.h"
#include "texture.h"
#include "character.h"
#include "Sphere.h"

class Pair
{
public:
	Pair(Character *letter, Character *digit, Sphere *sphere);
	~Pair();
	Character* getLetter();
	Character* getDigit();
	void draw(Shader *shader, Shader *sphereShader, glm::mat4 matrix);
	void draw(Shader *shader, Shader *sphereShader, glm::mat4 matrix, Texture *texture);
protected:
	Character *letter;
	Character *digit;
	Sphere *sphere;
};
#endif