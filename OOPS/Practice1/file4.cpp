#include<iostream>
#include<fstream>

using namespace std;


int main(){
ofstream fout;


fout.open("zx.txt");


fout<<"Hi I am Pradip Maity\n";


fout<<"I am college student";
fout.close();



ifstream fin;

fin.open("zx.txt");

string line;

while(getline(fin,line)){
  cout<<line<<endl;

}
fin.close();


  return 0;
}