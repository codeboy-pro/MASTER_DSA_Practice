#include<iostream>//separate 0 and 1 without using two pointer

using namespace std;
int main(){

int n=7;
int arr[n]={1,0,1,0,1,1,0};
int start=0,end=n-1;
while(start<end){
    if(arr[start]==0){
        start++;
    }
    else{
        if(arr[end]==0){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
        else{
            end--;
        }
    }
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}