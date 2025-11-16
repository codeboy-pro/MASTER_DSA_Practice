#include<iostream>
#include<vector>
using namespace std;
void print(int *arr,int index,int n,int sum){
  vector<int>sums;
  if(index==n){
    cout<<sum<<endl;
    return;
  }
print(arr,index+1,n,sum);
print(arr,index+1,n,sum+arr[index]);

}
int main(){
int arr[]={1,2,3};
int sum=0;
print(arr,0,3,sum);


  return 0;
}