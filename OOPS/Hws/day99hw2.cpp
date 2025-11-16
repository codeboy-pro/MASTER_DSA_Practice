#include<iostream>
using namespace std;
class car{
string model;
int year;
double fuel_level;
int speed;
bool isRunning;
public:
car(){

}
car(string name,int year,double fuel_level,int speed,bool isRunning){
  this->model=model;
  this->year=year;
  this->fuel_level=fuel_level;
  this->speed=speed;
  this->isRunning=isRunning;


}
void start_en(){
isRunning=1;
cout<<" Your car starts recently and your car activity is  "<<isRunning<<endl;
}
void stop_en(){
isRunning=0;
cout<<" Your car stops recently and your car activity is  "<<isRunning<<endl;
}
void accelerate(int amount){
  if(amount>0 and amount<100){
    speed+=amount;
cout<<" Your car accelerates "<<amount<<" and the speed is "<<speed<<endl;
  }
  else{
    cout<<"Invalid speed accerleration"<<endl;
  }
}
void break_speed(int amount){
  if(amount>0 and amount<100){
    speed-=amount;
    cout<<" Your car break up "<<amount<<"and the speed is "<<speed<<endl;

  }
  else{
    cout<<" Invalid speed break "<<endl;
  }
}
void refuel(int amount){
  if(amount>0 and amount<=200){
    fuel_level+=amount;
    cout<<" Now the fuel level is "<<fuel_level<<endl;
  }
  else{
    cout<< "Invalid refual amount"<<endl;
  }
}
void display(){
  cout<<model<< " car "<< " which is manufactured in "<<year<<" .It has the fuel level "<<fuel_level<<" now its activity is "<<isRunning<<endl; 
}

};
int main(){
car c("sdjkgh",2007,56,80,0);
c.start_en();
c.accelerate(20);
c.break_speed(10);
c.refuel(100);

c.stop_en();
c.display();

  return 0;
}