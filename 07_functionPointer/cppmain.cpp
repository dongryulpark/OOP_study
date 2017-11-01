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

//void ~~~~(int ~~) ������ �Լ��� ���� ������
typedef void(*FP1)(int);
//void Point::~~~~() ������ �Լ��� ���� ������
//mathod�� ���� ������
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
	//c++���� function pointer ��� �� &�� ������ �ٿ���� �Ѵ�.
	//()���� �ǹ̸� ���� ��Ȯ�� �Ͽ���
	fp2 = &(Point::setX);
	//fp2 = &Point::setX;
	(pt.*fp2)(100);

	pt.print();
	return 0;
}