// They are attributes of classes or class menmber
// static member function

// const keyword homework

#include <iostream>
#include<math.h>
using namespace std;
class customer
{

  string name;
  int account_num, balance,age;
  static int total_customer;
  static int total_balance;
public:
  customer(string name, int account_num, int balance,int age)
  {
    this->name = name;
    this->account_num = account_num;
    this->balance = balance;
    this->age=age;

    total_customer++;
    total_balance += balance;
  }
  static void access_static()
  {
    cout << "Total number of customer is:" << total_customer << endl;
    cout << "Total balnce of the bank is:" << total_balance << endl;
  }
  void updateage(int age){
    if(age>0 and age<120){
      this->age=age;
      
    }
    else{
      cout<<"Invalid age";
      
    }
  }
  void deposit(int amount)
  {
    if (amount > 0)
    {
      balance += amount;
      total_balance += amount;
    }
    else{
      cout<<"Invalid amount";
    }
  }
  void withdraw(int amaount)
  {
    if (amaount <= balance and amaount > 0)
    {
      balance -= amaount;
      total_balance -= amaount;
    }
  }
  void display()
  {
    cout << name << " " << account_num << " " << balance << " "<<age <<" "<< total_customer << endl;
  }
  void total_display()
  {
    cout << total_customer << endl;
  }
};
int customer::total_customer = 0;
int customer::total_balance = 0;

int main()
{

  customer A1("Pradip", 1, 1000,20);

  customer A2("Mohit", 3, 1800,22);

  customer A3("Mohan", 3, 2000,24);
A1.deposit(100);
  // A1.balance+=-13;
  A1.display();
  A1.updateage(30);
  A1.display();

// abstraction

  cout<<pow(2,3);

  return 0;
}


