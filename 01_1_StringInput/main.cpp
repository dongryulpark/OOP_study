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

	cin.clear();					// ����! cin�� �޼ҵ��̴�. ���� 
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	
	cin.getline(inputedString, 20); // ����! cin�� �޼ҵ带 ����Ѵ�.
	cin.clear();					
	//���� ���� �÷��� ��Ʈ�� �ʱ�ȭ�Ͽ� ����cin�� �۵��� �ϰ� ���ش�. �� Ŭ���� ������ ����� �ϴ°��� �ƴϴ�.
	//cin.ignore(numeric_limits<streamsize>::max(), '\n'); -> clearbuffer
	//���� cpp string�� ���� �Է��� ���� �Է� �ް� ���� �������� cin.clear�� Ŭ���� ������ ������ ���� ����Ѵ�.
	getline(cin, inputedCppString); // getline�ȿ� Cin�� ����.
	cout << "inputedString = " << inputedString << endl;
	cout << "inputedCppString = " << inputedCppString << "\n\n" << endl;

	return 0;
}