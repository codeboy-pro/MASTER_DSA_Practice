#include<iostream>
using namespace std;
int subset(int arr[],int index,int sum,int n){
if(index==n){
  return sum==0;
}

  return subset(arr,index+1,sum,n) + subset(arr,index+1,sum-arr[index],n);
}
int main(){

int arr[]={2,5,6,1};
int sum=8;
int n=4;
cout<<subset(arr,0,sum,n)<<endl;

  return 0;
}