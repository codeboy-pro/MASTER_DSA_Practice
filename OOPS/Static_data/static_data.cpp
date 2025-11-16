// They are attributes of classes or class menmber 
//static member function
#include<iostream>
using namespace std;
class customer{

string name;
int account_num,balance ;
// static int total_customer;


public:
static int total_customer;// we can also acces it without class


customer(string name,int account_num,int balance){
  this->name=name;
  this->account_num=account_num;
  this->balance=balance;
 total_customer++;


}
void display(){
  cout<<name<<" "<<account_num<<" "<<balance<<" "<<total_customer<<endl;
}
void total_display(){
  cout<<total_customer<<endl;
}
};
int customer::total_customer=0;

int main(){

customer A1("Pradip",1,1000);

customer A2("Mohit",30,3000);

customer A3("Mohan",30,400);
customer::total_customer=5;

A1.total_display();





// A1.display();
// A2.display();
// customer A3("Mohan",30,400);
// A3.display();


  return 0;
}