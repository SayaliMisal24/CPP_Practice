#include<iostream>
using namespace std;
class Rectangle{
private:
   double length;
   double width;
public:
   Rectangle(){
      length=1.0;
      width=1.0;
   }
   Rectangle( double len, double wid){
      length=len;
      width=wid;
   }
   ~Rectangle(){  //destructor
   cout<<"Rectangle Object destroyed"<<endl;
   }
   double calculateArea(){
      return length*width;
   }
   double calculatePerimeter(){
      return 2*(length+width); 
   }
};
int main(){
   Rectangle rect(4.0,40.0);
   cout<<"---Rectangle Properties---"<<endl;
   cout<<"Area:"<<rect.calculateArea()<<endl;
   cout<<"Perimeter:"<<rect.calculatePerimeter()<<endl;
   return 0;
}
   
   
   
   
