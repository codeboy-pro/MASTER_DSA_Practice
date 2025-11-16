#include<iostream>
using namespace std;
void fun(int n){
  if(n==0){
    cout<<"Happy Birthday  Pradip";
    return;
  }
  cout<<n<<"days left for birthday"<<endl;
  fun(n-1);
}
int main(){
int n;
cin>>n;
// for(int i=n;i>0;i--){
//   cout<<i<<"days left for birthday\n";
//   cout<<endl;
// }
// cout<<"Happy birthday";

fun(n);


  return 0;

}