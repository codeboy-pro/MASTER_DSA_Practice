#include<iostream>
using namespace std;
int BinarySearch(int *arr,int n,int key){
    int start=0;
    int end=n-1,mid;
    //find the mid
    while(start<=end){

    mid=start+(end-start)/2;
    if(arr[mid]==key )   {
        return mid;
        break;
    }
    else if (arr[mid]<key){
        start=mid+1; 
    }
    //arr[mid]>key
    else{
        end=mid-1;

    }
    //arr[mid]<key
}
return -1;
}
int main(){
    int arr[1000];
    int n;
    cout<<"Enter the size:";

    cin>>n;
    cout<<"Enter the elements:";

    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
int key;
cin>>key;
cout<<BinarySearch(arr,n,key);

}