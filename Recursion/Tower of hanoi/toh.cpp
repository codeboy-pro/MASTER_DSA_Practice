#include<iostream>
#include<math.h>
using namespace std;
void toh(int n,int from,int help,int to){
  if(n==1){
    cout<<"move disk "<<n<<" from rod "<<from<<" to rod "<<to<<endl;
   return;
  }
  toh(n-1,from,to,help);
  cout<<"move disk "<<n<<" from rod "<<from<<" to rod "<<to<<endl;
  toh(n-1,help,from,to);
}
int main(){
int n=3;
  int from=1;
  int to=3;
  int help=2;
  toh(n,from,help,to);

  cout<<pow(2,n)-1;
  return 0;
}