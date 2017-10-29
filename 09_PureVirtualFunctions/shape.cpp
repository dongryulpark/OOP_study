#include "shape.h"

Shape::Shape()
{
	_x = 0;
	_y = 0;
}

Shape::Shape(double x, double y)
{
	_x = x;
	_y = y;
}

void Shape::move(double x, double y)
{
	_x = x; _y = y;
}

void Shape::draw() const //this function not change member value
{
	cout << "[Shape] Position x = " << _x << " y = " << _y << endl;
}