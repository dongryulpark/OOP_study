#include <iostream>

using namespace std;

class Point
{
public:
	Point(int x, int y);
	void setX(int x);
	void print();
private:
	int x, y;
};

//void ~~~~(int ~~) 형태의 함수에 대한 포인터
typedef void(*FP1)(int);
//void Point::~~~~() 형태의 함수에 대한 포인터
//mathod에 대한 포인터
typedef void(Point::*FP2)(int);

Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
}

void Point::setX(int x)
{
	this->x = x;
}

void Point::print()
{
	cout << x << "   " << y << endl;
}

int main() 
{
	Point pt(50, 50);

	//FP1 fp1 = &point::setX;
	FP2 fp2;
	//c++에서 function pointer 사용 시 &을 무조건 붙여줘야 한다.
	//()으로 의미를 더욱 명확히 하였음
	fp2 = &(Point::setX);
	//fp2 = &Point::setX;
	(pt.*fp2)(100);

	pt.print();
	return 0;
}