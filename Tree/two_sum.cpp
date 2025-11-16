#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>arr{1,2,3,4};
int target=6;
int n=arr.size();
vector<int>ans;
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
  if(arr[i]+arr[j]==target){
    ans.push_back(i);
    ans.push_back(j);
    break;
  }
}
if(ans.size()==2){
  break;
}
}
for(int i=0;i<ans.size();i++){
  cout<<ans[i]<<endl;
}
  return 0;

}