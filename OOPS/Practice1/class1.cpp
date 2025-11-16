#include<iostream>
using namespace std;
class Student{
private:
string name;
int age;
string grade;
public:
void setname(string s){
  if(s.size()==0){
    cout<<"Enter a valid name.";
    return;
  }
  name=s;
}
void setage(int n){
  if(n<0 or n>120){
    cout<<"Enter a valid age.";
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
int getage(){
  return age;
}
string getgrade(int n){
  if(n==123){
  return grade;
  }
  else{
    cout<<"nana anananananana";
    
  }
  
}
private:
int roll_no;
};
int main(){

Student s;
// s.name="Pradip";
// s.age=20;
// s.grade="A+";
// cout<<s.name<<endl;
// cout<<s.age<<endl;
// cout<<s.grade<<endl;
// s.roll_no=20;  it throughs error because we use private before initiating tthe roll_no

s.setname("Pradip");
s.setage(20);
s.setgrade("A+");
s.getname();
cout<<s.getage()<<endl;
cout<<s.getgrade(125)<<endl;

  return 0;
}