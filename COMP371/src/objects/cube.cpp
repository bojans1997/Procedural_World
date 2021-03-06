#include "cube.h"

Cube::Cube(int x, int y, int z) : x(x), y(y), z(z)
{
	float vertices[] = {
		// back
		0.0f, 0.0f, 0.0f,  0.5f, 0.5f, 0.5f,  0.0f, 0.0f, 0.5f, 0.5f, -1.0f, 
		1.0f, 0.0f, 0.0f,  0.5f, 0.5f, 0.5f,  1.0f, 0.0f, 0.5f, 0.5f, -1.0f,
		1.0f, 1.0f, 0.0f,  0.5f, 0.5f, 0.5f,  1.0f, 1.0f, 0.5f, 0.5f, -1.0f,

		1.0f, 1.0f, 0.0f,  0.5f, 0.5f, 0.5f,  1.0f, 1.0f, 0.5f, 0.5f, -1.0f,
		0.0f, 1.0f, 0.0f,  0.5f, 0.5f, 0.5f,  0.0f, 1.0f, 0.5f, 0.5f, -1.0f,
		0.0f, 0.0f, 0.0f,  0.5f, 0.5f, 0.5f,  0.0f, 0.0f, 0.5f, 0.5f, -1.0f,

		// front
		0.0f, 0.0f, 1.0f,  0.5f, 0.5f, 0.5f,  0.0f, 0.0f, 0.5f, 0.5f, 1.0f,
		1.0f, 0.0f,	1.0f,  0.5f, 0.5f, 0.5f,  1.0f, 0.0f, 0.5f, 0.5f, 1.0f,
		1.0f, 1.0f, 1.0f,  0.5f, 0.5f, 0.5f,  1.0f, 1.0f, 0.5f, 0.5f, 1.0f,

		1.0f, 1.0f, 1.0f,  0.5f, 0.5f, 0.5f,  1.0f, 1.0f, 0.5f, 0.5f, 1.0f,
		0.0f, 1.0f, 1.0f,  0.5f, 0.5f, 0.5f,  0.0f, 1.0f, 0.5f, 0.5f, 1.0f,
		0.0f, 0.0f, 1.0f,  0.5f, 0.5f, 0.5f,  0.0f, 0.0f, 0.5f, 0.5f, 1.0f,

		// bottom
		0.0f, 0.0f, 0.0f,  0.5f, 0.5f, 0.5f,  0.0f, 0.0f, 0.5f, -1.0f, 0.5f,
		1.0f, 0.0f, 0.0f,  0.5f, 0.5f, 0.5f,  1.0f, 0.0f, 0.5f, -1.0f, 0.5f,
		1.0f, 0.0f, 1.0f,  0.5f, 0.5f, 0.5f,  1.0f, 1.0f, 0.5f, -1.0f, 0.5f,

		1.0f, 0.0f, 1.0f,  0.5f, 0.5f, 0.5f,  1.0f, 1.0f, 0.5f, -1.0f, 0.5f,
		0.0f, 0.0f, 1.0f,  0.5f, 0.5f, 0.5f,  0.0f, 1.0f, 0.5f, -1.0f, 0.5f,
		0.0f, 0.0f, 0.0f,  0.5f, 0.5f, 0.5f,  0.0f, 0.0f, 0.5f, -1.0f, 0.5f,

		// left
		0.0f, 1.0f, 1.0f,  0.75f, 0.75f, 0.75f,  1.0f, 1.0f, -1.0f, 0.5f, 0.5f,
		0.0f, 1.0f, 0.0f,  0.75f, 0.75f, 0.75f,  0.0f, 1.0f, -1.0f, 0.5f, 0.5f,
		0.0f, 0.0f, 0.0f,  0.75f, 0.75f, 0.75f,  0.0f, 0.0f, -1.0f, 0.5f, 0.5f,

		0.0f, 0.0f, 0.0f,  0.75f, 0.75f, 0.75f,  0.0f, 0.0f, -1.0f, 0.5f, 0.5f,
		0.0f, 0.0f, 1.0f,  0.75f, 0.75f, 0.75f,  1.0f, 0.0f, -1.0f, 0.5f, 0.5f,
		0.0f, 1.0f, 1.0f,  0.75f, 0.75f, 0.75f,  1.0f, 1.0f, -1.0f, 0.5f, 0.5f,

		// right
		1.0f, 1.0f, 1.0f,  0.75f, 0.75f, 0.75f,  1.0f, 1.0f, 1.0f, 0.5f, 0.5f,
		1.0f, 1.0f, 0.0f,  0.75f, 0.75f, 0.75f,  0.0f, 1.0f, 1.0f, 0.5f, 0.5f,
		1.0f, 0.0f, 0.0f,  0.75f, 0.75f, 0.75f,  0.0f, 0.0f, 1.0f, 0.5f, 0.5f,

		1.0f, 0.0f, 0.0f,  0.75f, 0.75f, 0.75f,  0.0f, 0.0f, 1.0f, 0.5f, 0.5f,
		1.0f, 0.0f, 1.0f,  0.75f, 0.75f, 0.75f,  1.0f, 0.0f, 1.0f, 0.5f, 0.5f,
		1.0f, 1.0f, 1.0f,  0.75f, 0.75f, 0.75f,  1.0f, 1.0f, 1.0f, 0.5f, 0.5f,

		// top
		0.0f, 1.0f, 0.0f,  0.75f, 0.75f, 0.75f,  0.0f, 0.0f, 0.5f, 1.0f, 0.5f,
		1.0f, 1.0f, 0.0f,  0.75f, 0.75f, 0.75f,  1.0f, 0.0f, 0.5f, 1.0f, 0.5f,
		1.0f, 1.0f, 1.0f,  0.75f, 0.75f, 0.75f,  1.0f, 1.0f, 0.5f, 1.0f, 0.5f,

		1.0f, 1.0f, 1.0f,  0.75f, 0.75f, 0.75f,  1.0f, 1.0f, 0.5f, 1.0f, 0.5f,
		0.0f, 1.0f, 1.0f,  0.75f, 0.75f, 0.75f,  0.0f, 1.0f, 0.5f, 1.0f, 0.5f,
		0.0f, 1.0f, 0.0f,  0.75f, 0.75f, 0.75f,  0.0f, 0.0f, 0.5f, 1.0f, 0.5f
	};

	glGenVertexArrays(1, &VAO);
	glGenBuffers(1, &VBO);

	glBindVertexArray(VAO);

	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 11 * sizeof(float), (void*)0);
	glEnableVertexAttribArray(0);

	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 11 * sizeof(float), (void*)(3 * sizeof(float)));
	glEnableVertexAttribArray(1);

	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 11 * sizeof(float), (void*)(6 * sizeof(float)));
	glEnableVertexAttribArray(2);
	
	glVertexAttribPointer(3, 3, GL_FLOAT, GL_FALSE, 11 * sizeof(float), (void*)(8 * sizeof(float)));
	glEnableVertexAttribArray(3);

	glBindBuffer(GL_ARRAY_BUFFER, 0);

	position = glm::vec3(x, y, z);
	model = glm::translate(model, glm::vec3(x, y, z));
}

Cube::~Cube()
{
	glDeleteVertexArrays(1, &VAO);
	glDeleteBuffers(1, &VBO);
}

glm::mat4 Cube::getModel()
{
	return model;
}

void Cube::draw(Shader *shader, glm::mat4 matrix)
{
	shader->use();
	glBindVertexArray(VAO);
	
	shader->setMat4("model", matrix);

	glDrawArrays(GL_TRIANGLES, 0, 36);
}

void Cube::draw(Shader *shader, glm::mat4 matrix, Texture *texture)
{
	if (texture) {
		glBindTexture(GL_TEXTURE_2D, texture->getTextureId());
	}

	this->draw(shader, matrix);

	glBindTexture(GL_TEXTURE_2D, 0);
}

void Cube::draw2(Shader *shader, glm::mat4 matrix)
{
	shader->use();
	glBindVertexArray(VAO);

	matrix = glm::translate(matrix, glm::vec3(x, y, z));
	shader->setMat4("model", matrix);

	glDrawArrays(GL_TRIANGLES, 0, 36);
}

void Cube::draw2(Shader *shader, glm::mat4 matrix, Texture *texture)
{
	if (texture) {
		glBindTexture(GL_TEXTURE_2D, texture->getTextureId());
	}

	this->draw2(shader, matrix);

	glBindTexture(GL_TEXTURE_2D, 0);
}