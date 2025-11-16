#include<iostream>
using namespace std;
int even_num(int *arr,int index,int n){

  if(index==n-1){//base case
 return  arr[index]%2==0?1:0;
   
  }
  return arr[index]%2==0?even_num(arr,index+1,n)+1:even_num(arr,index+1,n);//assumption and self work
}
int main(){
int arr[]={1,3,4,6,7,3,10};
cout<<even_num(arr,0,7);


  return 0;
}