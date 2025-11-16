#include<iostream>
#include<vector>
using namespace std;
bool Equal(vector<int>arr){
    int n=arr.size();
    int t_sum=0,ans=0,prefix=0;
    for(int i=0;i<n;i++){
        t_sum+=arr[i];
    }
    for(int j=0;j<n-1;j++){
        prefix+=arr[j];
        ans=t_sum-prefix;
        if(prefix==ans){
            return 1;
        }
    }
    return 0;
}//time com: o(n)

int main(){

int n;
cout<<"Enter the size:";
cin>>n;
vector<int>arr(n);
cout<<"Enter the ele:";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<Equal(arr);
    return 0;
}