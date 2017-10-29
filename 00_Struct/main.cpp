#include <iostream>

using namespace std;

struct Ractangle
{
	int x, y;
	int width, height;
};

int main() 
{
	Ractangle rc = { 100, 100, 50, 50 };
	Ractangle *rcp = &rc;

	cout << "original Ractangle struct value" << endl;
	cout << rc.x << "  " << rc.y << "  " << rc.width << "  " << rc.height << endl;

	//주의 구조체 포인터에서 값에 접근하는 방법은 2가지가 있다.
	(*rcp).x = 200;
	cout << "changed Ractangle struct value" << endl;
	cout << rc.x << "  " << rc.y << "  " << rc.width << "  " << rc.height << endl;

	rcp->x = 150;
	cout << "second changed Ractangle struct value" << endl;
	cout << rc.x << "  " << rc.y << "  " << rc.width << "  " << rc.height << endl;

}