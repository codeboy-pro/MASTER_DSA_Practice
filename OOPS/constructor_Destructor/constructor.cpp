#include<iostream>//https://www.w3schools.com/cpp/cpp_constructors.asp
using namespace std;
class customer{
string name;
int account_no;
int balance;
int *roi;

public:
customer()//default constructor
{
  // cout<<"Hello constructor\n";
  name="Pradip";
  account_no=12330;
balance=40;
roi=new int[100];



}
customer(string name,int account_no){//parameterized constructor
  this->name=name;
  this->account_no=account_no;
}
// customer(string name,int account_no,int balance){
//   //constructor overloading . here is many constructor with different types of parameters
//   this->name=name;
//   this->account_no=account_no;
//   this->balance=balance;
// }
//copy constructor
customer(customer &b){
  name=b.name;
account_no=b.account_no;
balance=b.balance;


}
//Inline constructor


inline customer(string a,int b,int c):name(a),account_no(b),balance(c){

}
void display(){
  cout<<name<<" "<<account_no<<endl;
}

};
int main(){

customer A1;
customer A2("Pradip",12304,790);//file input

customer A3("lalu",1209);
A1.display();
A2.display();
A3.display();
// customer A4;
customer A4(A3);
A4.display();
  return 0;
}