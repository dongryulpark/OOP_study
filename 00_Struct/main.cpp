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

	//���� ����ü �����Ϳ��� ���� �����ϴ� ����� 2������ �ִ�.
	(*rcp).x = 200;
	cout << "changed Ractangle struct value" << endl;
	cout << rc.x << "  " << rc.y << "  " << rc.width << "  " << rc.height << endl;

	rcp->x = 150;
	cout << "second changed Ractangle struct value" << endl;
	cout << rc.x << "  " << rc.y << "  " << rc.width << "  " << rc.height << endl;

}