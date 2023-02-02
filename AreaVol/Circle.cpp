#include "Circle.h"

void Circle::SetRadius(float r)
{
	radius = r;
}

float Circle::GetRadius()
{
	return radius;
}

float Circle::GetPerimeter()
{
	return 0.0f;
}

float Circle::GetArea()
{
	return 0.0f;
}

Circle::Circle(float r)
{
	SetRadius(0);
}
