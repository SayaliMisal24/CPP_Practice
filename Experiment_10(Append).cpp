#include<iostream>
#include<fstream>
using namespace std;

int main(){
   ofstream fout("Hello.txt",ios::app);
   fout<<"\nNew Entry added!"<<endl;
   fout.close();
   return 0;
}
