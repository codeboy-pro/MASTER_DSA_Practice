#include<iostream>
using namespace std;
int  target_sum(int *arr,int index,int n,int target){
if(index==n){
  if(target==0){
    return 1;
  }
  else{
    return 0;
  }
}

return target_sum(arr,index+1,n,target-arr[index]) + target_sum(arr,index+1,n,target);
}

int main(){

int arr[]={2,5,6,1};
int target=7;
int a=target_sum(arr,0,4,target);
cout<<a;



  return 0;
}