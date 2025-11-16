#include <iostream>
using namespace std;
class customer
{
  string name;
  int balance, account_number;

public:
  customer(string name, int balance, int account_number)
  {
    this->account_number = account_number;
    this->balance = balance;
    this->name = name;
  }
  // deposit
  void deposit(int amount)
  {
    if (amount <= 0) 
    {

      throw runtime_error("amount shouid be greater than 0");
    }
    balance += amount;
    
    cout << amount << " rs is credited successfully\n";
  }
  // withdraw
  void withdraw(int amount)
  {
    if (amount > 0 and amount <= balance)
    {
      balance -= amount;
      cout << amount << " rs is withdrawn  successfully\n";
    }
    else if (amount < 0)
    {
      throw runtime_error("amount shouid be greater than 0.");
    }
    else
    {
      throw "Your balance is low";
    }
  }
};

int main()
{

  customer c1("Pradip", 5000, 10);
  try
  {
    c1.deposit(100);
    c1.withdraw(6000);
  }
  catch (const runtime_error &e)
  {
    cout << "Exception occured: " << e.what() << endl;
  }
  catch (const bad_alloc &e)
  {
    cout << "Expection occurred:" << e.what() << endl;
  }
  catch (...)
  {
    cout << "Exception occurred";
  }
}