#include<iostream>
#include<vector>
using namespace std;
void print(int *arr,int index,int n,int sum,vector<int>&ans){

if(index==n){
  ans.push_back(sum);
  return;

}
  //not included
  print(arr,index+1,n,sum,ans);
  print(arr,index+1,n,sum+arr[index],ans);//included
}
int main(){
int arr[]={1,2,3,4};
int n=4;
vector<int>ans;
print(arr,0,n,0,ans);
for(int i=0;i<ans.size();i++){
  cout<<ans[i]<<endl;
}

  return 0;
}