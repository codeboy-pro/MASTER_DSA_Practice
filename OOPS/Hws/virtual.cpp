
#include<iostream>
using namespace std;
class sir{
public:
void virtual speak(){


  cout<<"ok ok";
}


};
class chandansir:public sir
{
public:
void speak(){
  cout<<"ha na";
}

};
class rohit_sir:public sir
{
public:
void speak(){
  cout<<"Chamak gya"<<endl;
}
};
int main(){
sir *p;
p=new chandansir();

p->speak();
sir *s;
s=new rohit_sir;
s->speak();

  return 0;
}