#include<iostream>
#include<fstream>


using namespace std;


int main(){

//open the file
ofstream fout;
fout.open("zoom.txt");//create if does not exist and open it

fout<<"Hello India";
//write kar sakta hu

fout.close();//resourse release kar paauon
  return 0;
}