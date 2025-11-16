#include<iostream>
using namespace std;
int partition(int arr[],int start,int end){
int pos=start;
for(int i=start;i<=end;i++){
if(arr[i]>=arr[end]){
  swap(arr[i],arr[pos]);
  pos++;
}
}
return pos-1;
}
void quick_sort(int arr[],int start,int end){
 if(start>=end){
  return ;
 }
 int pivot=partition(arr,start,end);
 quick_sort(arr,start,pivot-1);
 quick_sort(arr,pivot+1,end);


}
int main(){
int arr[]={10,2,4,3,5,1,20,30,22,21};


quick_sort(arr,0,9);
for(int i=0;i<10;i++){
cout<<arr[i]<<" ";
}
  return 0;
}
