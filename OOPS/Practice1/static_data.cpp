

#include<iostream>
using namespace std;
class Student{
string name;
int age;
int balance ;
static int student_no;
public:
Student(string name,int age,int balance){
  this->name=name;
  this->age=age;
  this->balance=balance;
  student_no++;
}
void display(){
  cout<<student_no<<endl;
}

};
int Student::student_no=0;
int main(){

Student s("Pradip",20,827538457);
Student s1("Kali",20,827538457);
Student s2("lalu",20,827538457);
s2.display();




  return 0;
}