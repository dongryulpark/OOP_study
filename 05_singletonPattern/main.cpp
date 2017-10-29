#include <iostream>
#include <string>

using namespace std;

class Student 
{
public: 
	string name;
	int sNo;
	void print();

	
	static Student* createStudent(const string& name_arg);
private:
	Student(const string& name_arg, int stdNumber);
	static int studentNumber;
	static Student* instance;
};

int Student::studentNumber =  0;
Student* Student::instance = 0;

Student* Student::createStudent(const string& name_arg) 
{
	if(instance == 0)
		instance= new Student(name_arg, studentNumber++);
	return instance;
}

Student::Student(const string& name_arg, int stdNumber) 
{
	name = name_arg;
	sNo = stdNumber;
}

void Student::print() 
{
	cout << "name = " << name << " num = " << sNo << "\n";
}

int main() {
	Student* p1, *p2, *p3;
	p1 = Student::createStudent("123");
	p2 = Student::createStudent("234");
	p3 = Student::createStudent("345");

	p1->print();
	p2->print();
	p3->print();

	delete p1;
	p1 = p2 = p3 = 0;

	return 0;
}