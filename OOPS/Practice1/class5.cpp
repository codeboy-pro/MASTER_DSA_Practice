#include<iostream>
using namespace std;
class fruit{
  public:
int number_of_fruit;

string name_of_fruit;
float price=456.90;//If theere is no instance attribute so the value of class attribute will be executed

};
int main(){
fruit *f=new fruit;
f->name_of_fruit="Mango";
f->number_of_fruit=20;
f->price=390.80;//this is an instance attribute so it prefers first


cout<<f->name_of_fruit<<endl<<f->number_of_fruit<<endl<<f->price<<endl;


  return 0;
}