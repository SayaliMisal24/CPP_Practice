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
class StudentExam:public Student
{
   public:
      int sub1,sub2,sub3,sub4,sub5,sub6;
      float per;
   public:
      void accept_data(){
         getdata();
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
         putdata();
         cout<<"\nMarks of subject 1: "<<sub1;
 	 cout<<"\nMarks of subject 2: "<<sub2;
	 cout<<"\nMarks of subject 3: "<<sub3;
	 cout<<"\nMarks of subject 4: "<<sub4;
	 cout<<"\nMarks of subject 5: "<<sub5;
	 cout<<"\nMarks of subject 6: "<<sub6;
      }
     void calculate(){
         per=(sub1+sub2+sub3+sub4+sub5+sub6)/6.0;
	 cout<<"\n\nTotal Percentage: "<<per;
	 cout<<"\n------------------------------\n";
      }
};
class StudentResult:public Student
{
   public:
    void Result(){
        cout<<"\n---------Student Result-----------";
    }
};  
int main()
{
   StudentExam str;
   StudentResult st;
   int count,i;
   cout<<"Enter Number of student you want: ";
   cin>>count;
   for(i=0;i<count;i++){
      str.accept_data();
      st.Result();
      str.display_data();
      str.calculate();
   }
   return 0;
}




























