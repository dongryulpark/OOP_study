#pragma once
#include "shape.h"

class Rectangle : public Shape
{
public:
	void draw() const;
	/*만약 자식 클래스에서 pure virtual함수를 재정의
	하지 않으면 오류가 난다.*/
	void resize(double width, double height);

	Rectangle();
	Rectangle(double x, double y, double width, double height);

protected:
	double _width;
	double _height;
};
