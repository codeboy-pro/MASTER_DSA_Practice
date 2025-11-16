#include<iostream>
using namespace std;
int main(){

int arr[1000];
int n;
cout<<"Enter the no of ele:";
cin>>n;
cout<<"Enter the the weight capacity of indi ele:";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int start=0,end=0,mid,ans;
for(int i=0;i<n;i++){
    if(arr[i]>start){
        start=arr[i];
        end+=arr[i];
    }
}
while(start<=end){
    mid=start+(end-start)/2;
    int package=0,count=1;
    for(int i=0;i<n;i++){
        package+=arr[i];
    if(package>mid)
    {
count++;
package=arr[i];

    }
    }
    if(count<=5){
ans=mid;
end=mid-1;
    }
    else{
        start=mid+1;
    }
}
cout<<ans;

    return 0;
}