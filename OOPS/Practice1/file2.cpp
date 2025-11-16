#include<iostream>
#include<fstream>

using namespace std;
int main(){
ofstream fout;


fout.open("new.txt");
fout<<"Hey I am C++ ";
fout.close();


  return 0;
}