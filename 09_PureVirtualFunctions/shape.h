#pragma once
#include <iostream>

using namespace std;

class Shape
{
public:
	void move(double x, double y);
	//void draw() const;
	/*pure virtual�� ����� ���� ���ε��� Ȱ���Ͽ� �� 
	��ü�� �޼ҵ尡 ȣ��ǰ� �Ѵ�.*/
	virtual void draw() const = 0;
	/*���⼭ pure virtual�� ��Ÿ���� ���� = 0 
	��������� �ٲ��� ������ ��Ÿ���� const�� �����ؾ��Ѵ�.*/
	Shape();
	Shape(double x, double y);

protected:
	double _x, _y;
};
