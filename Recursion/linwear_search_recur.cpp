#include<iostream>
using namespace std;
bool linear_search(int *arr,int x,int index,int N){
if(index==N){
  return 0;
}

  if(arr[index]==x){
    return 1;
  }
  return linear_search(arr,x,index+1,N);
}
int main(){

int arr[]={1,3,6,9,10};

int x=9;
cout<<linear_search(arr,x,0,5);



  return 0;
}