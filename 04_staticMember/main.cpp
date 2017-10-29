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
	cout << "선언된 객체의 수" << objectNumber << endl;
}

int main() 
{
	StaticMemberClass SMO;
	SMO.printObjectNumber();

	StaticMemberClass SMO1;
	/*static 멤버변수는 메모리에 상주한다 따라서 모든 객체가 같은
	변수(주소)를 사용한다.*/
	SMO.printObjectNumber();
	SMO1.printObjectNumber();
	
	SMO1.~StaticMemberClass();
	SMO.printObjectNumber();
}