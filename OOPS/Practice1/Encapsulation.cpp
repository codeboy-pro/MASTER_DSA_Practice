#include<iostream>
using namespace std;
class Student{
private:
string name;
int roll_no;
string grade;
public:
Student(string name,int roll_no,string grade){
  this->name=name;
  this->roll_no=roll_no;
  this->grade=grade;

}
void update_roll(int y){
  if(y>0){
    roll_no=y;
  }
}
void update_grade(string x){
  grade=x;
}
void display(){
  cout<<name<<" "<<roll_no<<" "<<grade<<endl;
}
};
int main(){

Student s("Pradip",12,"A+");


s.update_grade("A++");
s.update_roll(34628347);
s.display();





  return 0;
}