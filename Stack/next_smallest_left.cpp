#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int>left_smallest(vector<int>&arr,int n){
vector<int>ans(n,-1);
stack<int>st;
for(int i=0;i<n;i++){
  while(!st.empty()&&arr[st.top()]>arr[i]){
    st.pop();
              
  }
  
  if(!st.empty()){
    ans[i]=arr[st.top()];
    
  }
  st.push(i);

}
return ans;
}

int main(){
vector<int>arr{61,5,60,71,8,19,16,102};
int n=arr.size();
vector<int>ans;
ans=left_smallest(arr,n);
for(int i=0;i<n;i++){
  cout<<ans[i]<<" ";

}


  return 0;
}