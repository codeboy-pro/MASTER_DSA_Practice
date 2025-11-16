#include<iostream>
using namespace std;
int max_ele(int *arr,int index,int n){
  if(index==n-1){
    return arr[index];
  }
  return max(arr[index],max_ele(arr,index+1,n));
  
}
int main(){
int arr[]={111,26,7,89,321};
cout<<max_ele(arr,0,5);


  return 0;
}