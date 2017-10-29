#include <iostream>

using namespace std;

class StaticMemberClass
{
public:
	StaticMemberClass();
	~StaticMemberClass();
	static void printObjectNumber();
private:
	static int objectNumber;
};

int StaticMemberClass::objectNumber = 0;

StaticMemberClass::StaticMemberClass() 
{
	objectNumber++;
}

StaticMemberClass::~StaticMemberClass() 
{
	objectNumber--;
}

void StaticMemberClass::printObjectNumber()
{
	cout << "����� ��ü�� ��" << objectNumber << endl;
}

int main() 
{
	StaticMemberClass SMO;
	SMO.printObjectNumber();

	StaticMemberClass SMO1;
	/*static ��������� �޸𸮿� �����Ѵ� ���� ��� ��ü�� ����
	����(�ּ�)�� ����Ѵ�.*/
	SMO.printObjectNumber();
	SMO1.printObjectNumber();
	
	SMO1.~StaticMemberClass();
	SMO.printObjectNumber();
}