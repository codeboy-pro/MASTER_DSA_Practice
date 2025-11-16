#include<iostream>
using namespace std;
int Binary_search(int *arr,int n,int target){
int start=0,end=n-1;
while(start<=end){
int mid=start+(end-start)/2;
    if(arr[mid]==target){
        return mid;
        break;
    }
    else if(arr[mid]>target){
        start=mid+1;

    }
    else{
        end=mid-1;

    }
}
return  -1;

}
int main(){
    int arr[1000];
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    cout<<"Enter the elements of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int target;
    cout<<"Enter the target ele:";
    cin>>target;

    cout<<Binary_search(arr,n,target);
    return 0;
}