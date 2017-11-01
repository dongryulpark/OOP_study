#pragma once
#include "shape.h"

class Rectangle : public Shape
{
public:
	void draw() const;
	/*만약 자식 클래스에서 virtual함수를 재정의
	하지 않으면 부모의 메소드가 호출이 된다*/
	void resize(double width, double height);

	Rectangle();
	Rectangle(double x, double y, double width, double height);

protected:
	double _width;
	double _height;
};
