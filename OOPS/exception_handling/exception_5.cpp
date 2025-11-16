#include<iostream>
using namespace std;
class  Invalid_amount_error:public runtime_error{
  public:
  Invalid_amount_error(const string &msg):runtime_error(msg){

  };


};
class InsufficientBalanceError:public runtime_error
{
  public:
  InsufficientBalanceError(const string &msg):runtime_error(msg){

  };


};


class customer{
string name;
int balance,account_number;

public:
customer(string name,int balance,int account_number){
  this->account_number=account_number;
  this->balance=balance;
  this->name=name;


}
//deposit
void deposit(int amount){
  if(amount<=0){

 throw Invalid_amount_error( "amount shouid be greater than 0");
  }
      balance+=amount;
    cout<<amount<<" rs is credited successfully\n";
 
}
//withdraw
void withdraw(int amount){
  if(amount>0 and amount<=balance){
    balance-=amount;
    cout<<amount<<" rs is withdrawn  successfully\n";

  }
  else if(amount<0){
   throw Invalid_amount_error( "amount shouid be greater than 0.");
  }
  else{
    throw InsufficientBalanceError ("Your balance is low");

  }
}




};

int main(){

customer c1("Pradip",5000,10);
try{
c1.deposit(100);
c1.withdraw(6000);
c1.deposit(100);
}
catch(const Invalid_amount_error &e){
  cout<<"Exception occured: "<<e.what()<<endl;
}
catch(const InsufficientBalanceError &e){
  cout<<"Expection occurred:"<<e.what()<<endl;
}
catch(...){
cout<<"Exception occurred";
}
}