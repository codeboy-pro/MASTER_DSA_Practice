#include<iostream>//print odd numbers by one arguments only

using namespace std;
void print_odd(int N){
if(N==1)//base case
{cout<<N<<endl;
return ;
  }
  print_odd(N-2);
  cout<<N<<endl;
}

int main(){
int N;
cin>>N;
if(N%2==0){
  N--;
}

print_odd(N);


  return 0;
}