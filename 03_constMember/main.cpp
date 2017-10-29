#include <iostream>

using namespace std;

class Example
{
public:
	Example();
	const int constMember;
	int &ref;
	int sample;
};

Example::Example()
:constMember(100), ref(sample) //무조건 초기화를 해줘야 한다.
{
	sample = 200;
}
int main() 
{
	Example ex;
	cout << ex.ref << endl;
	cout << ex.sample << endl;
	cout << ex.constMember << endl;
}