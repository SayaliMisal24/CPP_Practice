#include<iostream>
#include<stdio.h>
using namespace std;
class Student
{
   private:
      int roll;
      char name[20];
   public:
      void getdata(){
         cout<<"\n------------------------------";
         cout<<"\nEnter roll number of student: ";
         cin>>roll;
         cout<<"\nEnter name of student: ";
         cin>>name;
      }
      void putdata(){
         cout<<"\n------------------------------";
         cout<<"\n*******Student Marklist*******";
         cout<<"\n------------------------------";
         cout<<"\nRoll Number: "<<roll;
         cout<<"\nStudent Name: "<<name;
      }
};
class StudentExam
{
   public:
      int sub1,sub2,sub3,sub4,sub5,sub6;
      float per;
   public:
      void accept_data(){
         cout<<"\nEnter Marks for subject 1: ";
         cin>>sub1;
	 cout<<"\nEnter Marks for subject 2: ";
         cin>>sub2;
	 cout<<"\nEnter Marks for subject 3: ";
         cin>>sub3;
	 cout<<"\nEnter Marks for subject 4: ";
         cin>>sub4;
	 cout<<"\nEnter Marks for subject 5: ";
         cin>>sub5;
	 cout<<"\nEnter Marks for subject 6: ";
         cin>>sub6;
      }
      void display_data(){
         cout<<"\nMarks of subject 1: "<<sub1;
 	 cout<<"\nMarks of subject 2: "<<sub2;
	 cout<<"\nMarks of subject 3: "<<sub3;
	 cout<<"\nMarks of subject 4: "<<sub4;
	 cout<<"\nMarks of subject 5: "<<sub5;
	 cout<<"\nMarks of subject 6: "<<sub6;
      }
};
class StudentResult:public Student,public StudentExam
{
   public:
      void accept(){
	 getdata();
	 accept_data();
      }
      void display(){
	 putdata();
	 display_data();
      }
      void calculate(){
         per=(sub1+sub2+sub3+sub4+sub5+sub6)/6.0;
	 cout<<"\n\nTotal Percentage: "<<per;
	 cout<<"\n------------------------------\n";
      }
};
int main()
{
   StudentResult str;
   int count,i;
   cout<<"Enter Number of student you want: ";
   cin>>count;
   for(i=0;i<count;i++){
      str.accept();
      str.display();
      str.calculate();
   }
   return 0;
}




























