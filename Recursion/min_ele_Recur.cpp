#include<iostream>
using namespace std;
int min_ele(int *arr,int index,int n){
  if(index==n-1){
    return arr[index];
  }
  return min(arr[index],min_ele(arr,index+1,n));

}
int main(){

int arr[]={11,21,34,56,7,88};

cout<<min_ele(arr,0,6);

  return 0;
}