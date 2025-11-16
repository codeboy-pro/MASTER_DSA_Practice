#include<iostream>
using namespace std;
#include<vector>
int main(){

vector<int>arr{1,2,1,2,44};
vector<int>ff(500,0);
for(int i=0;i<5;i++){
  ff[arr[i]]++;
}
for(int i=0;i<5;i++){
  if(ff[arr[i]]==1){
    cout<<arr[i];
  }
}


  return 0;
}