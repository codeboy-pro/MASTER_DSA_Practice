#include<iostream>
using namespace std;

class Student
{
  private:
  string name;
  int age;
   string grade;
  public:
  void setname(string s){
    if(s.size()==0){
      cout<<"Invalid name."<<endl;
      return;
    }
    name=s;
  }
  void setage(int n){
    if(n<0 || n>120){
      cout<<"Invalid age.";
      return;
    }
    age=n;
  }
  void setgrade(string g){
    grade=g;
  }
  void getname(){
    cout<<name<<endl;
  }
  int  getage(){
    return age;
  }
 string getgrade(int pin){
if(pin==123)
  return grade;

  return "Na Na Na Na";
 }

};

int main(){
Student S1;
S1.setname("");
S1.setage(23);
S1.setgrade("A+");
S1.getname();
cout<<S1.getage()<<endl;
cout<<S1.getgrade(124);
  return 0;
}