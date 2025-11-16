#include<iostream>
using namespace std;
// void printeven(int num,int N){
// if(num==N){
//   cout<<num<<endl;
//   return ;
// }

//   cout<<num<<endl;
//   printeven(num+2,N);
// }
void printeven(int N){
if(N==2){
  cout<<N<<endl;
  return;

}
printeven(N-2);
cout<<N<<endl;

}
int main(){
int N;
cin>>N;
if(N%2==1){
  N--;

}
// printeven(2,N);
printeven(N);


  return 0;
}