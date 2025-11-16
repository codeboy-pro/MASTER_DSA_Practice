#include<iostream>
using namespace std;
int mul(int *arr,int index,int n){
  if(index==n-1){
    return arr[index];
  }
  return arr[index]*mul(arr,index+1,n);
}
int main(){
int arr[]={1,3,4,5};
cout<<mul(arr,0,4);



  return 0;
}