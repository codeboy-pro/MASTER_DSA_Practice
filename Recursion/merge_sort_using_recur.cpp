#include<iostream>
#include<vector>
using namespace  std;
void merge(int *arr,int start,int mid,int end){
  vector<int>temp(end-start+1);
  int left=start,right=mid+1,index=0;
  while(left<=mid && right<=end){
    if(arr[left]<=arr[right]){
temp[index]=arr[left];
left++,index++;

    }
    else{
      temp[index]=arr[right];
      index++,right++;

    }
  }
  while(left<=mid){
    temp[index]=arr[left];
    index++,left++;
  }
  while(right<=end){
temp[index]=arr[right];
index++,right++;

  }
  index=0;
  while(start<=end){
    arr[start]=temp[index];
    start++,index++;

  }

}
void merge_sort(int *arr,int start,int end){
  int mid=start+(end-start)/2;
  if(start==end){
    return;
  }
  merge_sort(arr,start,mid);
  merge_sort(arr,mid+1,end);
  merge(arr,start,mid,end);
}
int main(){
int arr[]={3,1,2,5,4,7,5,6,9,4,10,2};

merge_sort(arr,0,11);
for(int i=0;i<12;i++){
  cout<<arr[i]<<" ";
}


  return 0;
}