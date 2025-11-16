#include<iostream>


using namespace std;
int main(){

string str="12345";
long long ans=0.0;
int n=5;
// int x=str[n-1]-48;
// ans=ans+x;
// cout<<ans<<endl;
// x=str[n-2]-48;
// ans+=x*10;
// cout<<ans<<endl;
// x=str[n-3]-48;
// ans+=x*100;
// cout<<ans<<endl;
// x=str[n-4]-48;
// ans+=x*1000;
// cout<<ans<<endl;
// x=str[n-5]-48;
// ans+=x*10000;
// cout<<ans<<endl;
for(int i=1;i<=n;i++){
  int x=str[n-i]-48;
  int a=i;
  while(a>1){
x*=10;
a--;
  }
  ans+=x;

}


cout<<ans;

  return 0;
}