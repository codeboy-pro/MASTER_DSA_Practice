#include<iostream>
using namespace std;
class Human{
public:
string name;
void display(){
  cout<<"My name is "<<name<<endl;
}

};
class Engineer:public virtual Human
{
  
  public:
  string spevialization;

  void work(){
    cout<<"I have specialization in "<<spevialization<<endl;
  }
};
class Youtuber:public virtual Human
{
  public:
    int subscribers;

    void contentCreater(){
      cout<<"I have subscriber base of"<<subscribers<<endl;

    }


};
class Code_teacher:public Youtuber,public Engineer{
public:
int salary;

Code_teacher(string name,string spevialization,int subscribers,int salary){
  this->name=name;
  this->spevialization=spevialization;
  this->subscribers=subscribers;
  this->salary=salary;

}

};
int main(){


// Code_teacher A1("Pradip","IT",93482347);

// A1.display();
 
Code_teacher A1("Pradip","IT",79000,99);


A1.display();

  return 0;
}