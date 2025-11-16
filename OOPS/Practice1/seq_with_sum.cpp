#include<iostream>
#include<vector>
using namespace std;

void seq(vector<int>&arr, int index, int n, vector<vector<int>> &ans, vector<int> &temp)
{
    if (index == n)
    {
        ans.push_back(temp); // Save the current subsequence (even if empty)
        return;
    }

    // Include the current element
    temp.push_back(arr[index]);
    seq(arr, index + 1, n, ans, temp);
    // Backtrack and exclude the current element
    temp.pop_back();
    seq(arr, index + 1, n, ans, temp);
}
  void sums(vector<int>& arr ,int index,int n,int sum,vector<int>&ans){
  
      if(index==n){
          ans.push_back(sum);
          return;
      }
      sums(arr,index+1,n,sum,ans);
      sums(arr,index+1,n,sum+arr[index],ans);
  }
int main(){

vector<int> arr{1,2,3};

vector<vector<int>>ans;
vector<int>temp;
seq(arr,0,3,ans,temp);
vector<int>sumo;
int sum=0;
sums(arr,0,3,sum,sumo);
// for(int i=0;i<sumo.size();i++){
//   cout<<sumo[i]<<" ";
// }
cout<<"sum"<<"    "<<"seq"<<endl;
for(int k=0;k<ans.size();k++){
    cout<<sumo[k];
  cout<<"     ";
  for(int l=0;l<ans[k].size();l++){
    cout<<ans[k][l]<<" ";
  }

  cout<<endl; 
}

  return 0;
}