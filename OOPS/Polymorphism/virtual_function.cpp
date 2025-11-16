#include<iostream>
#include<vector>
using namespace std;
class Animal{
public:
// virtual void  speak(){// virtual function
//   cout<<"huhu\n";
  
// }
virtual void  speak()=0;//Abstruct class

};
class Dog:public Animal
{
public:
void speak(){
  cout<<"bark\n";
  
}

};
class Cat:public Animal
{
public:
void speak(){
  cout<<"Meow\n";
  
}

};

int main(){


Animal *p;

// p=new Dog();
// p->speak();


vector<Animal*>animals;
animals.push_back(new Dog());
animals.push_back(new Cat());
// animals.push_back(new Animal());
animals.push_back(new Dog());
animals.push_back(new Cat());
for(int i=0;i<animals.size();i++){
  p=animals[i];
  p->speak();

}





  return 0;
}