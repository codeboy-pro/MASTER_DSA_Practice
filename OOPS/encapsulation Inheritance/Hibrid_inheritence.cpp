#include<iostream>
using namespace std;
//student
//boy
//girl
//female
class student{
public:
void print(){
  cout<<"I am student \n";

}
};
class male{
  public:
  void Maleprint(){
    cout<<"I am male";
  }
};
class Female{
  public:
  void Femaleprint(){
    cout<<"I am Female";
  }
};

class boy:public student,public male
{
public:
void Boyprint(){
  cout<<"I am boy\n";

}
};
class girl:public student,public Female
{
public:
void Girlprint(){
  cout<<"I am girl\n";

}
};



int main(){
girl G1;
G1.Girlprint();
G1.print();
boy b1;
b1.Boyprint();
b1.Maleprint();

  return 0;
}