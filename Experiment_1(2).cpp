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
	cout<<"Roll Number: "<<roll_no<<endl;
	cout<<"Name: "<<name<<endl;
	cout<<"Marks: "<<marks<<endl;
	}
};
int main()
{
Student student[5];
for (int i=0;i<=4;i++)
{
cout<<"Student: "<<i+1<<endl;
student[i].input();
}
cout<<"\n---Student Details---\n";
for (int j=0;j<=4;j++)
{
cout<<"Student: "<<j+1<<endl;
student[j].display();
}
return 0;
};


	
