#include <iostream>
using namespace std;
class customer
{
  string name;
  int *data;

public:
customer(){
name="4";
 cout<<"Constructor is"<<name<<endl;
}
  // customer()
  // {
  //   name="Pradip";
  //   data=new int;
  //   *data=12;

  //   cout << "Constructor is called"<<endl;
  // }
  customer(string name){
    
    this->name=name;
    cout<<"Constructor is"<<name<<endl;
  }
  ~customer()
  {
    // delete data;  

    cout << "Destructor is called"<<name << endl;
  }
};

int main()
{

  customer A1("1"),A2("2"),A3("3");
 customer *A4=new customer;

delete A4;

  return 0;
}