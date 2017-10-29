#pragma once
#include "shape.h"

class Circle : public Shape
{
public:
	void draw() const;
	void setRadius(double radius);

	Circle();
	Circle(double x, double y, double radius);

protected:
	double _radius;
};
