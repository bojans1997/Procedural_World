#version 330 core
layout (location = 0) in vec3 aPos;
layout (location = 1) in vec3 aNormal;

out vec3 ourColor;
out vec3 normal;
out vec3 fragPos;

uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;

void main()
{
	fragPos = vec3(model* vec4(aPos, 1.0f));
    gl_Position = projection * view * vec4(fragPos, 1.0);
	ourColor = vec3(0.9f, 0.9f, 0.9f);
	
	normal = mat3(model) * aNormal; 
} 