#include <iostream>

using namespace std;

class CopyCoonstructorEx
{
public:
	CopyCoonstructorEx();
	CopyCoonstructorEx(const CopyCoonstructorEx& input);
};
CopyCoonstructorEx::CopyCoonstructorEx() 
{
	
}
CopyCoonstructorEx::CopyCoonstructorEx(const CopyCoonstructorEx& input) 
{
	cout << "hi i'm the copy constructor" << endl;
}

int main() 
{
	CopyCoonstructorEx ex1;
	CopyCoonstructorEx ex2 = ex1; //1st way to call copyconstructor
	CopyCoonstructorEx ex3(ex1); //2ed way to call copyconstructor
}