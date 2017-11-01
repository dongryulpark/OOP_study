#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
	char inputedString[20];
	string inputedCppString;

	// this mathod of input have error of index over so we avoide this method
	cin >> inputedString;
	cin >> inputedCppString;
	
	cout << "inputedString = " << inputedString << endl;
	cout << "inputedCppString = " << inputedCppString << "\n\n" << endl;

	cin.clear();					// 주의! cin의 메소드이다. 또한 
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	
	cin.getline(inputedString, 20); // 주의! cin의 메소드를 사용한다.
	cin.clear();					
	//내부 상태 플레그 비트를 초기화하여 뒤의cin이 작동을 하게 해준다. 즉 클리어 버퍼의 기능을 하는것은 아니다.
	//cin.ignore(numeric_limits<streamsize>::max(), '\n'); -> clearbuffer
	//만약 cpp string에 위에 입력한 것을 입력 받게 하지 않으려면 cin.clear와 클리어 버퍼의 구문을 같이 써야한다.
	getline(cin, inputedCppString); // getline안에 Cin이 들어간다.
	cout << "inputedString = " << inputedString << endl;
	cout << "inputedCppString = " << inputedCppString << "\n\n" << endl;

	return 0;
}