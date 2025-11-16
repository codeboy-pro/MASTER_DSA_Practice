#include<iostream>
#include<vector>
#include <algorithm>
#include<fstream>


using namespace std;


int main(){

ofstream fout;
fout.open("zout.txt");

fout<<"Hello India\n";
fout<<"Hello Pradip"<<endl;
fout.close();

ifstream fin;
fin.open("zout.txt");



string line;
while(getline(fin,line)){
  cout<<line<<endl;
}

fin.close();


  return 0;
}