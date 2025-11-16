#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int>arr{4,1,1,2,1,3};
int n=6,B=1;
int count=0;
vector<int>ans;
for(int i=0;i<n;i++){
    if(arr[i]!=B){
        ans.push_back(arr[i]);

    }
}
count=arr.size()-ans.size();
arr.clear();
int m=ans.size();
for(int i=0;i<n;i++){
    arr.push_back(ans[i]);
}

cout<<count<<endl;
for (int i=0;i<m;i++)
cout << arr[i] << " ";
return 0;
}