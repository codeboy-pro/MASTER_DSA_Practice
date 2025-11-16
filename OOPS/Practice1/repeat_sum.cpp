#include<iostream>
using namespace std;
int rr(int *arr,int index,int n,int target){

    if(target==0){
      return 1;
    }
    if(index==n || target<0){
      return 0;
    }
  

  return rr(arr,index+1,n,target)+rr(arr,index,n,target-arr[index]);

}
int main(){

int arr[]={2,3,4};
int x=rr(arr,0,4,6);
cout<<x;
  return 0;
}