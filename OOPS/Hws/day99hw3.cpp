#include<iostream>
using namespace std;
class Laptop{
string brand;
double screen_size;
string processor;
int ram;
int storage;

double battery_level;
bool ison;
public:
Laptop(string brand ,double screen_size,int storage,string processor,int ram,
double battery_level,bool ison){
  this->brand=brand;
  this->screen_size=screen_size;
  this->processor=processor;
  this->ram=ram;
  this->battery_level=battery_level;
  this->ison=ison;
  this->storage=storage;
}
void poweron(){
  ison=1;
  cout<<"Laptop is on now and laptop activity is"<<ison<<endl;
}
void poweroff(){
  ison=0;
  cout<<"Laptop is off now and laptop activity is"<<ison<<endl;
}
void openApp(int app){
if(app>0 and app<=10){
  cout<<"Now "<<app<<" no of apps are opened"<<endl;
}
else{
  cout<<"Give the no of open apps between 1 to app"<<endl;
}
}
void closeApp(int app){
if(app>0 and app<=10){
  cout<<"Now "<<app<<" no of closed are closed"<<endl;
}
else{
  cout<<"Give the no of off  apps between 1 to app"<<endl;
}
}
void charge(double x){
  if(x>0 and x<=100){
 battery_level+=x;
  }
 else{
  cout<<"Invalid charge"<<endl;
 }
  
}



void display(){
  cout<<"Laptop is "<<brand<<" with the screen size "<<screen_size<<"has the processor "<<processor<<" has the ram "<<ram<< " gb and has the storage "<<storage<<"GB now the battery level is:"<<battery_level<<"and the batteruy activity is"<<ison<<endl;
}
};

int main(){
Laptop L("Lenovo",46.34,512,"intel i5",16,67.9,0);
L.poweron();
L.openApp(5);
L.closeApp(2);
L.charge(30);
L.poweroff();
L.display();

  return 0;
}

