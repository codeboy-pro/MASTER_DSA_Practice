#include<iostream>
using namespace std;
class Human{
private:
string religion;
string color;


  public:
  string name;
  int age,weight;

};
class student:protected Human{
  private:
  int roll_no,fees;
public:
 student(string name,int age,int weight,int roll_no,int fees){
this->name=name;
this->age=age;
this->weight=weight;
this->roll_no=roll_no;
this->fees=fees;

 }
void display(){
  cout<<name<<" age is "<<age<<" weight is "<<weight<<" and roll no is:   "<<roll_no <<" and fees is: " <<fees<<endl;
}

};

class Teacher:public Human
{
int salary,id;
};



  int main(){


student s("Pradip",30,70,24111,60000);
s.display();

Teacher B;
B.name="mohit";


  return 0;

}