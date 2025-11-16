#include<iostream>//separate 0 and 1 without using two pointer

using namespace std;
int main(){

int n=7;
int arr[n]={1,0,1,0,1,1,0};
int count0=0;
int count1=0;
for(int i=0;i<n;i++){
    if(arr[i]==0){
        count0++;
    }
    else{
        count1++;
    }
}
for(int j=0;j<count0;j++){
arr[j]=0;
}
for(int j=count0;j<n;j++){
    arr[j]=1;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}