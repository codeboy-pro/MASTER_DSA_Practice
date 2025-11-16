#include<iostream>
using namespace std;
int power(int base,int index){
int count=0;
if(index==0){//base case
  return 1;

}
return base*power(base,index-1);//self work 
//  power(base,index-1) part is our asumption that it would give me the value ofx^(y-1);

}
int sum(int num){
  if(num==1){
    return 1;
  }
  return num+sum(num-1);
}
int main(){
int base;
int index;
cin>>base >>index;
cout<<power(base,index);
  return 0;
}