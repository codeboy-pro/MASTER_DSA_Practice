#include<iostream>
#include<fstream>


using namespace std;


int main(){
ifstream fin;
//file open 
fin.open("zoom.txt");


//read karo

char c;
c=fin.get();
while(!fin.eof()){
  cout<<c;
  c=fin.get();
}
fin.close();

  return 0;
}