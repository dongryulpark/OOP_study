#pragma once
#include <iostream>

using namespace std;

class Shape
{
public:
	void move(double x, double y);
	//void draw() const;
	/*pure virtual로 만들어 동적 바인딩을 활용하여 각 
	객체의 메소드가 호출되게 한다.*/
	virtual void draw() const = 0;
	/*여기서 pure virtual을 나타내는 것을 = 0 
	멤버변수를 바꾸지 않음을 나타내는 const는 구분해야한다.*/
	Shape();
	Shape(double x, double y);

protected:
	double _x, _y;
};
