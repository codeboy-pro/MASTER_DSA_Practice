#include<iostream>
#include<fstream>
using namespace std;
int main(){
ifstream fin;
fin.open("code.txt");
char c=fin.get();
while(!fin.eof()){
  cout<<c;
  c=fin.get();

}

fin.close();


  return 0;
}

