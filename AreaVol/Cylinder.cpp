#include "Cylinder.h"
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

void Cylinder::setHeight(float h)
{
	height = h;
}

float Cylinder::getHeight()
{
	return height;
}

float Cylinder::GetArea()
{
	return (2 * M_PI * GetRadius() * getHeight()) + (2 * M_PI * pow(GetRadius(),2));
}

float Cylinder::getVolume()
{
	return M_PI * pow(GetRadius(),2) * getHeight();
}



Cylinder::Cylinder(float r, float h)
{

	cout << "Cylinder App!" <<endl;
	cout << "-----------------"<<endl;

		cout << "enter radius: ";
		cin >> r;
		cout << "enter height: ";
		cin >> h;
		SetRadius(r);
		setHeight(h);
	if (r < 0) {
		SetRadius(0);
		cout << "invalid radius input";
	}
	cout << "Cylinder Area: "<< GetArea() << endl;
	cout << "Cylinder Volume: " << getVolume();

	
	


	



}
