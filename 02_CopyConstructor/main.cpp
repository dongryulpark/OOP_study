#include <iostream>

using namespace std;

class CopyCoonstructorEx
{
public:
	CopyCoonstructorEx(int temp1, int temp2);
	CopyCoonstructorEx(const CopyCoonstructorEx& input);
	int temp1, temp2;
};
CopyCoonstructorEx::CopyCoonstructorEx(int temp1, int temp2) 
{
	this->temp1 = temp1;
	this->temp2 = temp2;
}

CopyCoonstructorEx::CopyCoonstructorEx(const CopyCoonstructorEx& input) 
{ // ���� �����ڸ� ������ �ϴ� ������ ���Կ����ڷ�
  // ���ϴ� ���� �����ϸ� �����ϰ� �ͱ� �����̴�.
	cout << "hi i'm the copy constructor" << endl;
	this->temp1 = input.temp1;
}

int main() 
{
	CopyCoonstructorEx ex1(100, 100);
	CopyCoonstructorEx ex2 = ex1; //1st way to call copyconstructor
	cout << ex2.temp1 << "   " << ex2.temp2 << endl;
	CopyCoonstructorEx ex3(ex1); //2ed way to call copyconstructor
}