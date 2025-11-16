#include<iostream>
using namespace std;
class Human{
string name;
int age;
int *balance;
int count=0;

public:
Human(string a,int b,int c){
  name=a;
  age=b;
  balance=new int;
  *balance=c;
  cout<<*balance<<endl;
  count++;
}
~Human(){
  delete balance;
  cout<<"destructor is called"<<endl;
  count--;

}
};

int main(){

Human H1("Pradip",20,12345);

  return 0;
}