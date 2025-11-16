// They are attributes of classes or class menmber 
//static member function

//const keyword homework

#include<iostream>
using namespace std;
class customer{

string name;
int account_num,balance ;
static int total_customer;
static int total_balance;



public:
customer(string name,int account_num,int balance){
  this->name=name;
  this->account_num=account_num;
  this->balance=balance;
 total_customer++;
 total_balance+=balance; 



}
static void access_static(){
  cout<<"Total number of customer is:"<<total_customer<<endl;
  cout<<"Total balnce of the bank is:"<<total_balance<<endl;

}
void deposit(int amount){
  if(amount>0){
balance+=amount;
total_balance+=amount;
 
  }
}
void withdraw(int amaount){
if(amaount<=balance and amaount>0){
balance-=amaount;
total_balance-=amaount;

}


}
void display(){
  cout<<name<<" "<<account_num<<" "<<balance<<" "<<total_customer<<endl;
}
void total_display(){
  cout<<total_customer<<endl;
}
};
int customer::total_customer=0;
int customer::total_balance=0;

int main(){

customer A1("Pradip",1,1000);

customer A2("Mohit",30,3000);

customer A3("Mohan",30,400);

// customer::access_static
// A1.total_display();

A1.deposit(800);

A2.withdraw(100);


customer::access_static();




  return 0;
}