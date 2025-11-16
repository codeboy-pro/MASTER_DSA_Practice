#include<iostream>
using namespace std;
class customer{
  public:
  string name;
  int age;
  int account_no;

  int balance;
  //Default constructor
  customer(){
    name="Pradip";
    cout<<"Hello Pradip"<<" "<<name<<endl;

  }
  //parameterized constructor


  customer(string name,int age,int account_no){
    this->name=name;
    this->age=age;
    this->account_no=account_no;

  }
void display(){
  cout<<"My name is "<<name<<" and age is "<<age<<" and account_no is:      "<<account_no<<endl;
}
};

int main(){


customer c;

customer d("Pradip",20,562874284);


d.display();


cout<<d.account_no<<endl;



  return 0;

}