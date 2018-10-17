/* sphere.h
Example class to create a generic sphere object
Resolution can be controlled by settign nuber of latitudes and longitudes
Iain Martin November 2018
*/

#pragma once

#include <gl/glew.h>
#include <vector>
#include <glm/glm.hpp>

#include "Shader.h"

class Sphere
{
private:
	Shader shader = NULL;
public:
	Sphere(Shader shader);
	~Sphere();

	void makeSphere(GLuint numlats, GLuint numlongs);
	void drawSphere(int drawmode);

	// Define vertex buffer object names (e.g as globals)
	GLuint sphereBufferObject;
	GLuint sphereNormals;
	GLuint sphereColours;
	GLuint elementbuffer;

	GLuint attribute_v_coord;
	GLuint attribute_v_normal;
	GLuint attribute_v_colours;

	int numspherevertices;
	int numlats;
	int numlongs;
	int drawmode;

private:
	void makeUnitSphere(GLfloat *pVertices);
};


