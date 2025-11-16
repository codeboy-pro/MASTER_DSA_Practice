#include<iostream>
using namespace std;
int main(){

int n=4;

int arr[n]={1,3,5,7};
int h=8;

int start=0,end=0,ans,mid,sum=0;
for(int i=0;i<n;i++){
    sum+=arr[i];
    end=max(arr[i],end);

}
start=sum/h;
while(start<=end){
    mid=start+(end-start)/2;
    int total_time=0;
    for(int i=0;i<n;i++){
        total_time+=(arr[i]/mid);
        if(arr[i]%mid){
            total_time++;
        }
    }
    if(total_time>h){
        start=mid+1;
    }
    else{
        ans=mid;
        end=mid-1;
    }
}
cout<<ans;
    return 0;
}