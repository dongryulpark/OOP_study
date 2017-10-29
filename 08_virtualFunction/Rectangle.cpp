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
	: Shape(x, y)//부모클래스이 생성자를 지정할 수 있다.
{
	_width = width; _height = height;
}