#include<iostream>
using namespace std;
class customer{
string name;
int balance ,account_no;
public:
customer(string name,int balance,int account_no){
  this->name=name;
  this->account_no=account_no;
  this->balance=balance;

}
void deposit(int amount){
  if(amount<0){
throw runtime_error("invalid amount");

  }
  else{
    balance+=amount;
    cout<<amount<<" rs is credited successfully."<<endl;

  }
}
void withdraw(int amount){
  if(amount>0 && amount<=balance){
    balance-=amount;
    cout<<amount<<"is withdrawn successfuylly."<<endl;

  }
  else if(amount<0){
    throw runtime_error("Invalid amount");


  }
  else{
    throw "Your balance is low";

  }
}


};
int main(){
customer c1("Pradip",20000,1234);
try{
c1.deposit(30);
c1.withdraw(500000);

}
catch (const runtime_error &e){
  cout<<"Expection occurred:"<<e.what()<<endl;
}
catch (const bad_alloc &e){
  cout<<"Expection occurred:"<<e.what()<<endl;
}
catch (...){
  cout<<"Expection occurred."<<endl;
}
  return 0;
}