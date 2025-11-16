#include<iostream>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
try{
if(b==0){
  throw "divisible by 0 is not possible";

}

int c=a/b;
cout<<"The result is: "<<c<<endl;


}
catch (const char *e){
  cout<<"Exctption occurred: "<<e<<endl;
  
}




  return 0;
}