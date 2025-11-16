#include<iostream>
using namespace std;
int find_fact(int num){
  if(num==0){
    return 1;
  }
  return num*find_fact(num-1);
}
int main(){
int num;
cin>>num;
cout<<find_fact(num);


  return 0;
}