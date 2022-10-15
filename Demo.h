#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint shaderProgram, VBO, VAO, EBO, texture, VBO2, VAO2, EBO2, texture2;
	float angle = 0;
	float angle1 = 0;
	float angle2 = 0;
	float scale = 4;
	float speed = 0.7f;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow* window);
	void BuildColoredCube();
	void BuildColoredPlane();
	void DrawColoredCube(int type, float transX, float transY, float transZ, float scaleZ, float scaleY, float scaleX);
	void DrawColoredPlane();
	void Bezzier();

	// Atribut Bezzier
	float xPos = 0;
	float zPos = 0;

	float p0x = 50;
	float p0z = -30;

	float p1x = 6;
	float p1z = 130;

	float p2x = 50;
	float p2z = -30;

	float x = 0;
	float z = 0;

	float t = 0;

	float tempX = 0;
	float tempZ = 0;

	float xPosition[500];
	float zPosition[500];

	int p = 1;
	int p0 = 0;
};
