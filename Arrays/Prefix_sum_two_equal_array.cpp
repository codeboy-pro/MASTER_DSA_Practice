#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool divide(vector<int>&arr){
    int maxi=INT8_MIN,prefix=0,n=arr.size(),t_sum=0;
    //total sum
    for(int i=0;i<n;i++){
t_sum+=arr[i];
    }
    for(int j=0;j<n-1;j++){
prefix+=arr[j];
// int ans=t_sum-prefix;
if(t_sum=2*prefix){
    return 1;

}
return 0;

    }

}
int main(){

    int n;
    cin>>n;
    vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<divide(arr);

    return 0;
}
