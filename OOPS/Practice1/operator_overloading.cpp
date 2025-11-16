#include<iostream>
using namespace std;
class complex{
int real;
int img;
public:
complex(){

}
complex(int real,int img){
  this->img=img;
  this->real=real;
}

void display(){
  cout<<real<<" +i"<<img<<endl;
}
complex operator +(complex &c){
complex ans;
ans.real=real+c.real;
ans.img=img+c.img;
return ans;
};
};

int main(){
complex c1(2,3);
complex c2(4,3);
complex c3=c1+c2;

c3.display();



  return 0;
}