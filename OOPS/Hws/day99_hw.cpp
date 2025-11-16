#include<iostream>
using namespace std;
class customer{
string name;
int account_no;
int acc_balance;
bool isactive;
public:
customer(string name,int account_no,int acc_balance,bool isactive){
  this->name=name;
  this->acc_balance=acc_balance;
  this->account_no=account_no;
  this->isactive=isactive;

}
void deposit(int amount){
  if(amount>0 and amount<=50000){
    acc_balance+=amount;
  }
}
void withdraw(int amount){
  if(amount>0){
    acc_balance-=amount;
  }
}
void transfer_amount(int amount,int target_acc){
    if(amount>0){
      acc_balance-=amount;
     cout<<name<<" transfer amount "<<amount<<" to the acc_no"<<target_acc<<". and "<<name<<"'s current balance is"<<acc_balance<<endl;
    }
    
}
void display(){
  cout<<name<<" has "<<acc_balance<<" in his account "<<" of account no:"<< account_no<<" and your activity record is "<<isactive<<endl;
}
};
int main(){
  customer c1("pradip",1234,3456,1);
// c1.display();
c1.transfer_amount(20,1354);
c1.transfer_amount(200000,135689);
c1.display();
cout<<"Thank you!"<<endl;
  return 0;
}