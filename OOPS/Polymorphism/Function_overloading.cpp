#include<iostream>     
using namespace std;

class Area{
public:

int calculateArea(int r){//circle
  return 3.14*r*r;
}
int calculateArea(int a,int b){//Rectangle
  return a*b;
}


};

int main(){
Area A,B;
cout<<A.calculateArea(4)<<endl;
cout<<B.calculateArea(4,3)<<endl;

  return 0;
}



