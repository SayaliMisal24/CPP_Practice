#include<iostream>
using namespace std;
class Vehicle
{
public:
Vehicle(){
cout<<"This is a vehicle\n";
}
};
class Fourwheeler{
public:
Fourwheeler(){
cout<<"This is a 4 wheeler\n";
}
};
class Car: public Vehicle, public Fourwheeler{
public:
Car(){
cout<< "This 4 wheeler vehicle is a car\n";
}
};
int main()
{
Car obj;
return 0;
}
