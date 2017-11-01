#include <iostream>

using namespace std;

struct Ractangle
{
	int x, y;
	int width, height;
};

int main()
{
	Ractangle rc;
	Ractangle *rcp = &rc;
	Ractangle rc1[2] = { {150,150,100,100},{250,250,150,150} };
	Ractangle *rc1p = rc1;

	rc = { 100, 100, 50, 50 };

	cout << "original Ractangle struct value" << endl;
	cout << rc.x << "  " << rc.y << "  " << rc.width << "  " << rc.height << endl;

	//주의 구조체 포인터에서 값에 접근하는 방법은 2가지가 있다.
	(*rcp).x = 200;
	cout << "changed Ractangle struct value" << endl;
	cout << rc.x << "  " << rc.y << "  " << rc.width << "  " << rc.height << endl;

	rcp->x = 150;
	cout << "second changed Ractangle struct value" << endl;
	cout << rc.x << "  " << rc.y << "  " << rc.width << "  " << rc.height << endl;

	cout << "Contact Array Ractangle struct value" << endl;
	cout << rc1[0].height << endl;

	cout << "Contact Array Ractangle struct value By pointer" << endl;
	cout << &rc1[0] << endl;
	cout << (rc1+1) -> height << endl;
	cout << (rc1p + 1)->height << endl;

	return 0;
}