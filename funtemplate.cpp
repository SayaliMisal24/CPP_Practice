#include<iostream>
using namespace std;
template<class T>
T add(T a, T b){
  return a+b;
}
int main(){
cout<<"sum of integers:"<<add(5,10)<<endl;
cout<<"sum of floats:"<<add(2.5,3.7)<<endl;
cout<<"sum of characters:"<<add<int>('A' , 1)<<endl;

return 0;
}
