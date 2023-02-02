#pragma once
#include "Circle.h"
class Cylinder : public Circle
{
private:
	float height;
public:
	void setHeight(float h);
	float getHeight();

	
	float GetArea();

	
	float getVolume();

	Cylinder(float r = 0, float h = 0);
};

