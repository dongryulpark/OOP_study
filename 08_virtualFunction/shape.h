#pragma once
#include <iostream>

using namespace std;

class Shape
{
public:
	void move(double x, double y);
	//void draw() const;
	/*virtual로 만들어 동적 바인딩을 활용하여 각 
	객체의 메소드가 호출되게 한다.*/
	virtual void draw() const;

	Shape();
	Shape(double x, double y);

protected:
	double _x, _y;
};
