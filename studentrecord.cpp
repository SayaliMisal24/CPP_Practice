#include<iostream>
using namespace std;
class Student
{
private:int roll_no;
	char name[20];
	float marks;
public:void input()
	{
	cout<<"Enter Roll Number: ";
	cin>>roll_no;
	cout<<"Enter Name: ";
	cin>>name;
	cout<<"Enter Marks: ";
	cin>>marks;
	}
	void display()
	{
	cout<<"---Student Details---\n";
	cout<<"Roll Number: "<<roll_no<<endl;
	cout<<"Name: "<<name<<endl;
	cout<<"Marks: "<<marks<<endl;
	}
};
int main()
{

Student student1;
student1.input();
student1.display();
return 0;
};


	
