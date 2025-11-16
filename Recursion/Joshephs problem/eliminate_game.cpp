#include<iostream>
#include<vector>
using namespace std;

int eliminate(vector<int>&arr,int n){
  vector<int>ans;

  if(n==1){
    return arr[0];
  }
  for(int i=0;i<n;i++){
    if(i%2!=0){
      ans.push_back(arr[i]);

    }
  }
  vector<int>amm;
  for(int j=0;j<ans.size();j++){
    if(j%2==0){
      amm.push_back(ans[j]);

    }
  }
arr=amm;
int x=amm.size();
return eliminate(arr,x);

}

int main(){

int n=6;
vector<int>arr;
for(int i=0;i<n;i++){
  arr.push_back(i+1);
}


int x=eliminate(arr,arr.size());
cout<<x<<endl;
  return 0;
}
