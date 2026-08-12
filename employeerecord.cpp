#include<iostream>
using namespace std;
class Employee
{
private:int id_no;
	char name[20];
	float salary;
public:void input()
	{
	cout<<"Enter Identity Number: ";
	cin>>id_no;
	cout<<"Enter Name: ";
	cin>>name;
	cout<<"Enter Salary: ";
	cin>>salary;
	}
	void display()
	{
	cout<<"---Employee Details---\n";
	cout<<"Identity Number: "<<id_no<<endl;
	cout<<"Name: "<<name<<endl;
	cout<<"Salary: "<<salary<<endl;
	}
};
int main()
{
Employee e1;
e1.input();
e1.display();
return 0;
};


	
