#include "Rectangle.h"

/*void Rectangle::draw() const
{
	cout << "[Ractangle] position x = " << _x << " y = " << _y
		<< " size width = " << _width << " height = " << _height << endl;
}*/

void Rectangle::resize(double width, double height)
{
	_width = width; _height = height;
}

Rectangle::Rectangle()
{
	_width = 0; _height = 0;
}

Rectangle::Rectangle(double x, double y, double width, double height)
	: Shape(x, y)//�θ�Ŭ������ �����ڸ� ������ �� �ִ�.
{
	_width = width; _height = height;
}