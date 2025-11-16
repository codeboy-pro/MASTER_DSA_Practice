#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>arr{1, 4, 45, 6, 10, 8};
int n=arr.size();
int target=13;
int count=0;
for(int i=0;i<n-2;i++){
    for(int j=i+1;j<n-1;j++){
        for(int k=j+1;k<n;k++){
            if(arr[i]+arr[j]+arr[k]==target){
             count++;

            }
         
        }
    }
}
if(count){
    cout<<1;
}
else{
    cout<<0;
}
cout<<"pradip";
    return 0;

}