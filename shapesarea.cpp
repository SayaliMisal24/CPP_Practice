#include<iostream>
using namespace std;
int area(int);
int area(int,int);
float area(float);
float area(float,float);
int main(){
   int s,l,b;
   float r,bs,ht;
   cout<<"Enter side of square:";
   cin>>s;
   cout<<"Area of Square:"<<area(s)<<endl;
   cout<<"Enter length of rectangle:";
   cin>>l;
   cout<<"Enter breadth of rectangle:";
   cin>>b;
   cout<<"Area of Rectangle:"<<area(l,b)<<endl;
   cout<<"Enter radius of circle:";
   cin>>r;
   cout<<"Area of Circle:"<<area(r)<<endl;
   cout<<"Enter base of triangle:";
   cin>>bs;
   cout<<"Enter height of triangle:";
   cin>>ht;
   cout<<"Area of Triangle:"<<area(bs,ht)<<endl;
}
int area(int s){
   return s*s;
   }
int area(int l,int b){
   return l*b;
   }
float area(float r){
   return 3.142*r*r;
   }
float area(float bs, float ht){
   return (bs*ht)/2;
   }



   
