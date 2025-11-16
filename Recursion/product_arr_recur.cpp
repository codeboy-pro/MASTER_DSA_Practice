#include<iostream>
using namespace std;
int product(int *arr,int index){
  if(index==-1){
    return 1;
  }
  return arr[index]*product(arr,index-1);
}
int main(){
int arr[5]={1,2,3,4,5};
int N=5;
cout<<product(arr,N-1);


  return 0;
}