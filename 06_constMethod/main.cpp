#include <iostream>

using namespace std;

class Point
{
public:
	Point();
	~Point();

	void print() const;
	int getX() const;
	int getY() const;

private:
	int x, y;
};

Point::Point()
{
	x = 0; y = 0;
}

Point::~Point()
{
	x = 0; y = 0;
}

void Point::print() const
{
	cout << "X = " << x << " Y = " << y << endl;
}

int Point::getX() const
{
	return x;
}


int Point::getY() const
{
	//const �Լ� �ȿ����� ��������� ������ �Ұ��� �ϴ�.
	//y = 200;
	return y;
}

int main()
{
	Point ex0;
	ex0.print();
	cout << "getX() = " << ex0.getX() << endl;
	cout << "getY() = " << ex0.getY() << endl;

	return 0;
}