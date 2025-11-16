#include<iostream>
using namespace std;
class person{
protected:
string name;


public:
void introduce(){
  cout<<"Hello my name is "<<name<<endl;
}
};

class Employee:public person
{
protected:
int salary;


public:
void month_salary(){
  cout<<"My monthly salary is:"<<salary<<endl;
}
};
class Manager:public Employee{
public:
string department;

Manager(string name,int salary,string department){
  this->name=name;
  this->salary=salary;
  this->department=department;

}
void work(){
  cout<<"I am working in the "<<department<<endl;
}

};
int main(){
Manager A1("Pradip",200,"finanace");

A1.work();
A1.month_salary();
A1.introduce();

  return 0;
}