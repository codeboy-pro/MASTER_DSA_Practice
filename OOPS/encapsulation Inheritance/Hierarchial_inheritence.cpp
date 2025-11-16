#include<iostream>
using namespace std;
class Human{
protected:
string name;
int age;
public:
Human(){

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
  Student(string name,int age,int roll_no,int fees)
  {

this->roll_no=roll_no;
this->fees=fees;

  }

void display(){
  cout<<name<<" "<<roll_no<<" "<<age<<" "<<fees<<endl;
}

};
class  Teacher:public Human
{
     int salary;

     public:
     Teacher(int salary,string name,int age)
     {
      this->salary=salary;
      this->age=age;
      this->name=name;

     }
     void display(){
      cout<<name<<" "<<age<<" "<<salary<<endl;
     }
 

};

int main(){

Student s("pradip",20,10,99);
s.display();


// s.work();
Teacher t(500,"Pradip",20);
t.display();




  return 0;
}