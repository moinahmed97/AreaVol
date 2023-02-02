#pragma once

class Circle
{
private:
	float radius;
public:
	void SetRadius(float r);
	float GetRadius();
	float GetPerimeter();
	float GetArea();
	Circle(float r = 0);



};

