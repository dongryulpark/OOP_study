#pragma once
#include "shape.h"

class Rectangle : public Shape
{
public:
	void draw() const;
	/*���� �ڽ� Ŭ�������� virtual�Լ��� ������
	���� ������ �θ��� �޼ҵ尡 ȣ���� �ȴ�*/
	void resize(double width, double height);

	Rectangle();
	Rectangle(double x, double y, double width, double height);

protected:
	double _width;
	double _height;
};
