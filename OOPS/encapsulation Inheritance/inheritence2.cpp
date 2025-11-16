#include<iostream>
using namespace std;
class Human{
  protected:
  
  string name;
  int age,weight;

};
class student:private Human{
  private:
  int roll_no,fees;
public:
void fan(string n,int a,int w,int f){
  name=n;
  age=a;
  weight=w;
  fees=f;

}
void display(){
  cout<<name<<" "<<age<<" "<<weight<<" "<<fees<<endl;
}
};

  int main(){

student a;
// a.name="Pradip";

a.fan("Pradip",10,30,9000);
a.display();

  return 0;

}