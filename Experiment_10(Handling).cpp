#include<iostream>
#include<fstream>
using namespace std;

int main(){
   ofstream fout("New_Document.txt");
   fout<<"Welcome to my new document";
   string line;
   while(fout){
      getline (cin,line);
      if(line=="-1")
         break;
      fout<<line<<endl;
   }
   fout.close();
   ifstream fin("New_Document.txt");
   while(getline(fin,line)){
      cout<<line<<endl;
   }
   fin.close();
   return 0;
}
   
