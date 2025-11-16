#include<iostream>
using namespace std;
class car{
public:
string model;
int model_no;
float price;


};
int main(){
int *p=new int;
*p=10;

car *bmw=new car;
// (*bmw).model="xyz";
bmw->model="xyz";

(*bmw).model_no=1245;
(*bmw).price=45478.90;
cout<<bmw->model<<endl;
cout<<bmw->model_no<<endl;
cout<<bmw->price<<endl;



  return 0;
}