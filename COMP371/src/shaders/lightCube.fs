#version 330 core
in vec3 ourColor;

out vec4 FragColor;


void main()
{
	
    FragColor = vec4(ourColor, 1.0); // set all 4 vector values to 1.0
}