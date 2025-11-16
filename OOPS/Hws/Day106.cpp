#include<iostream>//single inheritence
using namespace std;
class engineer{
protected:
string name;
int age;
public:
engineer(string name,int age){
this->name=name;
this->age=age;
}
void display(){
  cout<<"Hey I am an engineer"<<endl;
}
};
//child class

class IT_engineer:public engineer{
protected:
int salary;
public:

IT_engineer(string name,int age,int salary):engineer(name,age)
{

  this->salary=salary;
}
void display(){


  cout<<"Hey I am an engineer .My name is "<<name<<",age is "<<age<<"and my salary is:"<<salary<<endl;
}

};
class employee:public IT_engineer{
int em_id;
public:
employee(string name,int age,int salary,int em_id):IT_engineer(name,age,salary){
  this->em_id=em_id;
}
void work(){


  cout<<"I am an engineer and my employee id is "<<em_id<<"and age is"<<age<<endl;

}



};
class code_teacher{
  protected:
int Number_of_code_file;
int lang;
public:
void teach(){
  cout<<"Hey I am a code teacher";

}


};



class you_tuber:public engineer,public code_teacher
{
int subscriber;
public:
you_tuber(string name,int age,int lang,int Number_of_code_file):engineer(name,age){
this->lang=lang;
this->Number_of_code_file=Number_of_code_file;




}
void jalwa(){
  cout<<"Hey bro I am "<<name<<"and I am "<<age <<"years old"<<"I know "<<lang<<"Number of coding language"<<endl;
}

};


class M_engi:engineer{
string company;
public:
M_engi(string name,int age,string company):engineer(name,age){
this->company=company;
}


void maza(){
cout<<"Hi i am mechanical engineer .my name is: "<<name<< " and age is: "<<age<<"and company is: "<<company<<endl;


}

};

class Human{
  public:
string name;
int age;



};
class tall:public virtual Human{
  public:
int height;
void work(){
  cout<<"Hey I am tall";

}


};
class small:public virtual Human{
  public:
int weight;
void ss(){
  cout<<"hey I am tall";
}



};
class KKl:public tall,public small{
int temp;
public:
KKl(string name,int age,int height,int weight,int temp){
this->name=name;
this->age=age;
this->height=height;
this->weight=weight;
this->temp=temp;


}
void ssk(){
  cout<<"Hi I am"<<name<<" "<<weight<<" "<<temp<<endl;
}


};


int main(){
IT_engineer P1("Pradip",20,200000);
P1.display();

employee e1("Rakesh",30,30000,78428);
e1.work();
you_tuber Y1("Bikash",39,3,300);
Y1.jalwa();
M_engi M1("Lalu",23,"amazon");
M1.maza();
KKl k1("Puspa",33,180,70,90);
k1.ssk();
  return 0;
}