#include<iostream>
#include<vector>
using namespace std;
int maxo(vector<int>arr){
    int n=arr.size();
    int maxi=INT8_MIN;
    
int prefix=0;
for(int j=0;j<n;j++){
    prefix+=arr[j];
    maxi=max(maxi,prefix);
    if(prefix<0){
        prefix=0;
    }
}
    
    return maxi;
}

int main(){


    return 0;
}