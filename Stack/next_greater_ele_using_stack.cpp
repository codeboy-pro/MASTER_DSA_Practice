#include<iostream>


#include<vector>
#include<stack>

using namespace std;
vector<int>find_next_greater(int *arr,int n){

vector<int>ans(n,-1);
stack<int>st;
for(int i=0;i<n;i++){
while(!st.empty() && arr[st.top()]<arr[i]){
  ans[st.top()]=arr[i];
  st.pop();

}
st.push(i);

}
return ans;

}


int main(){
  int n=6;
  int arr[n]={4,3,1,4,5,6};
vector<int>ans;
ans=find_next_greater(arr,n);
for(int i=0;i<n;i++){
  cout<<ans[i]<<" ";

}



  return 0;
}
