#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main() 
{
	char cString[] = "this is c style string";
	int len = strlen(cString); // c style string length
	char* copyedString = new char[len + 1];
	char* combinedString = new char[(len * 2) + 1];
	// c++ string 
	string cppString = "c++ style";
	string copyedCppString;
	string combinedCppString = "combine example ";
	string searchedCppString = "Napster's pay-to-play service is officially out";

	/*example of c style string copy nowadays we must use strcpy_s();*/
	strcpy(copyedString, cString);
	//strcpy_s(copyedString, sizeof(char) * (len + 1),cString);

	cout << "example of c style string copy" << endl;
	cout << "cString = " << cString << endl;
	cout << "copyedString = " << copyedString << "\n\n" << endl;
	
	
	/*example of c style string compare*/
	cout << "example of c style string compare" << endl;
	if (strcmp(cString, "this is c style string") == 0) // compare 2 string
		cout << "cString is same with this is c style string" << endl;
	if (strcmp(cString, "is c style string") != 0)
		cout << "cString is NOT same with is c style string" << "\n\n" << endl;
	
	cout << "example of c style string combine" << endl;
	strcpy(combinedString, cString);
	strcat(combinedString, cString);//combine 2 string
	cout << "combined string = " << combinedString << "\n\n" << endl;
	
	cout << "example of cpp style string" << endl;
	cout << "cpp style string = " << cppString << "\n\n" << endl;

	copyedCppString = cppString;//cpp style copy
	cout << "example of cpp style string copy" << endl;
	cout << "copyed string = " << copyedCppString << "\n\n" << endl;

	cout << "example of cpp style string length" << endl;
	cout << "cpp string length = " << cppString.size() << "\n\n" << endl;
	//size mathod return size of cpp style string

	combinedCppString = combinedCppString + cppString; // combine 2 string 
	cout << "example of cpp style string combine" << endl;
	cout << "cpp string combine = " << combinedCppString << "\n\n" << endl;
	
	cout << "example of cpp style string compare" << endl;
	if (combinedCppString != "123")//compare 2 cpp style string
		cout << "cpp string combine != 123" << "\n\n" << endl;

	cout << "example of cpp style string search" << endl;
	cout << "offset of \"official\" = " << searchedCppString.find("official") << "\n\n" << endl;

	string path = "C:\\Users\\phyon\\Downloads\\01_class";
	cout << "example of cpp style string substring" << endl;
	cout << "cpp substring = " << path.substr(path.size() - 8, 8) << "\n\n" << endl;

	cppString = cString;
	cppString[0] = 'B';

	cout << "example of c style string to cpp style string" << endl;
	cout << "copyed cpp style string = " << cppString << endl;
	cout << "original c style string = " << cString << "\n\n" << endl;

	const char* cStyle = NULL;
	cStyle = cppString.c_str();
	//cStyle is const so that we can't change any value

	cout << "copyed cStyle string = " << cStyle << endl;
	cout << "original cpp style string = " << cppString << "\n\n" << endl;

	char* cStyle2 = new char[cppString.size() + 1];
	strcpy(cStyle2, cppString.c_str());
	cStyle2[0] = 'C';
	cout << "copyed cStyle string = " << cStyle2 << endl;
	cout << "original cpp style string = " << cppString << "\n\n" << endl;

	char inputedString[20];
	string inputedCppString;

	// this mathod of input have error of index over so we avoide this method
	cin >> inputedString;
	cin >> inputedCppString;

	cout << "inputedString = " << inputedString << endl;
	cout << "inputedCppString = " << inputedCppString << "\n\n" << endl;

	//clear buffer
	//while ((getchar()) != ‘\n’); in c
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cin.getline(inputedString, 20); // 주의! cin의 메소드를 사용한다.
	cin.clear();					// 주의! cin의 메소드
	getline(cin, inputedCppString); // getline안에 Cin이 들어간다.
	cout << "inputedString = " << inputedString << endl;
	cout << "inputedCppString = " << inputedCppString << "\n\n" << endl;


	/*동적할당 사용 규칙 new & delete 쌍이루기*/
	delete[] copyedString; 
	delete[] combinedString;

	return 0;
}