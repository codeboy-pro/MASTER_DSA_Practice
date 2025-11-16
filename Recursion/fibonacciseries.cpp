#include<iostream>
using namespace std;
int frog(int n){

  if(n==0){
  return 4;
}
if(n<=2){
  return n;
}

if(n==3) return 4;
return frog(n-1)+frog(n-2)+frog(n-3);
}
int main(){

int n;
cin>>n;
cout<<frog( n);


  return 0;
}