#include<iostream>
using namespace std;
class student{
private:
   string name;
   int marks;
friend class result;
public:
   student(string n, int m){
      name=n;
      marks=m;
   }
};
class result{
public:
   void displayresult(student s){
      cout<<"Student Name:"<<s.name<<endl;
      cout<<"marks: "<<s.marks<< endl;
   }
};
int main(){
student s("Sayali",95);
result r;
r.displayresult(s);
return 0;
}
