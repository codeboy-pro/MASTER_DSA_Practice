#include<iostream>
using namespace std;
class Human{
protected:
string name;
int age;
public:
// Human(){
//   cout<<"Hi Human"<<endl;

// }
// ~Human(){
//   cout<<"Hi Human"<<endl;

// }
Human(string name,int age){
  this->age=age;
  this->name=name;


}
void display(){
  cout<<name<<" "<<age;
  
}
void work(){
  cout<<"I am working  \n";

}
};
class Student:public Human{
  int roll_no,fees;
  public:
  Student(string name,int age,int roll_no,int fees):Human(name,age)
  {
// this->name=name;
// this->age=age;
this->roll_no=roll_no;
this->fees=fees;

  }
// Student(){
//   cout<<"Hello Student"<<endl;
// }
// ~Student(){
//   cout<<"Hello Student"<<endl;
// }
void display(){
  cout<<name<<" "<<roll_no<<" "<<age<<" "<<fees<<endl;

  
}

};

int main(){

Student s("pradip",20,10,99);
s.display();

// s.work();



  return 0;
}