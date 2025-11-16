#include<iostream>
using namespace std;
class Engineer{
  void money(){
    cout<<"I have money"<<endl;
  }
  public:
  string spevialization;
Engineer(){
  cout<<"Hello engineer"<<endl;
}
  void work(){
    cout<<"I have specialization in "<<spevialization<<endl;
  }
};
class Youtuber{
  public:
    int subscribers;
 Youtuber(){
  cout<<"Hello Youtuber"<<endl;
 }
    void contentCreater(){
      cout<<"I have subscriber base of"<<subscribers<<endl;

    }


};
class Code_teacher:public Youtuber,public Engineer{
public:
string name;
Code_teacher(){
  cout<<"Hello code_teacher"<<endl;
}
Code_teacher(string name,string spevialization,int subscribers){
  this->name=name;
  this->spevialization=spevialization;
  this->subscribers=subscribers;

}
void display(){
  cout<<"My name is "<<name<<endl;
  work();
  contentCreater();

}
};
int main(){


// Code_teacher A1("Pradip","IT",93482347);

// A1.display();
 
Code_teacher A1;

  return 0;
}