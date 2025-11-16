#include<iostream>
using namespace std;
void print(int N){
  if(N==1){
    cout<<N<<endl;
    return ;
  }
  print(N-1);
  cout<<N<<endl;
}
int main(){
//print number from 1 to N
int N;
cin>>N;
print(N);



  return 0;
}