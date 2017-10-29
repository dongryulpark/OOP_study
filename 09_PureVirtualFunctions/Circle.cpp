#include "Circle.h"

void Circle::draw() const
{
	cout << "[Circle] position x = " << _x << " y = " << _y
		<< " radius = " << _radius << endl;
}
void Circle::setRadius(double radius)
{
	this->_radius = radius;
}

Circle::Circle()
	:Shape(0, 0)
{
	this->_radius = 0;
}

Circle::Circle(double x, double y, double radius)
	: Shape(x, y)
{
	this->_radius = radius;
}
