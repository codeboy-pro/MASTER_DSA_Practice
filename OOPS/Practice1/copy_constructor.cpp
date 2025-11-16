#include<iostream>
using namespace std;
class Human{
  private:
string name;
int age;
int balance;
public:
Human(string name,int age,int balance){
  this->name=name;
  this->age=age;
  this->balance=balance;

}

//copy constructor

Human(Human &b){
  name=b.name;
  age=b.age;
  balance=b.balance;

}
void display(){
  cout<<name<<" "<<age<<" "<<balance<<endl;
}

};

int main() {
Human H("Pradip",22,5423);
Human A(H);


A.display();

  return 0;
}