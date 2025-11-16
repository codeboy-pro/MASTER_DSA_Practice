#include<iostream>
using namespace std;
bool Bina(int arr[],int start,int end,int x){
if(start>end){
  return 0;
}


  int mid=start+(end-start)/2;
  if(arr[mid]==x){
    return 1;
  }
  else if(arr[mid]<x){
    return Bina(arr,mid+1,end,x);
    
  }
  else{
    return Bina(arr,start,mid-1,x);
  }
}
int main(){
int arr[6]={1,2,2,5,8,10};
int x=11;
cout<<Bina(arr,0,5,x);



  return 0;
}