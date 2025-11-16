#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n=6;
    vector<int>arr{3, 2, 1, 5, 7, 8};
    vector<int>ans(3);
int total=0,prefix=0,right_sum=0,min_idx=-1,subarray=1,min_dif=INT8_MAX;


    
    for(int i=0;i<n;i++){
        total+=arr[i];

    }
    for(int i=0;i<n;i++){
        prefix+=arr[i];
        right_sum=total-prefix;
        int diff=abs(right_sum-prefix);
        if(diff<min_dif){
            min_dif=diff;
            min_idx=i+1;
            if(prefix<=right_sum){
subarray=1;
            }
            else{
                subarray=2;
            }
        }
    }
    cout<<min_dif<<" "<<min_idx+1<<" "<<subarray<<endl;


    return 0;
}