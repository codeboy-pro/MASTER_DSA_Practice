#include<iostream>
using namespace std;
class animal{
public:
virtual void speak(){


    cout<<"huhu\n";


  }



};
class Dog:public animal{
public:
void speak(){
cout<<"bark\n";

}



};
class Cat:public animal{
public:
void speak(){
cout<<"meow\n";

}



};

int main(){
animal *p;
p=new Dog();
p->speak();
animal *p1;
p1=new Cat();
p1->speak();

  return 0;
}