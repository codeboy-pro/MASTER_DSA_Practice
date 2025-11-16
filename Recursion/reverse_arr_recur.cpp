#include<iostream>
using namespace std;
void reverse(int *arr,int start,int end){
if(start>=end){
  return;
}

  int x=arr[start];
  arr[start]=arr[end];
  arr[end]=x;
  reverse(arr,start+1,end-1);
}
int main(){
int arr[5]={9,8,5,2,1};
int start=0,end=5-1;
reverse(arr,start,end);
for(int i=0;i<5;i++){
  cout<<arr[i]<<endl;
}
  return 0;
}