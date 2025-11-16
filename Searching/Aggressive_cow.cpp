//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:

    int aggressiveCows(vector<int> &arr, int k) {

        // Write your code here
        sort(arr.begin(),arr.end());

 int n=arr.size();
 int start=0,end,mid,ans;
 end=arr[n-1]-arr[start];
 
while(start<=end){
    mid=start+(end-start)/2;
    int pos=arr[start],count=1;
    for(int i=0;i<n;i++){

        if(pos+arr[i]>mid){
            count++;
            pos=arr[i];

        }
    }
    if(count<k){
        end=mid-1;
    }
    else{
        ans=mid;
        start=mid+1;

    }


}
return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int k;
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string in;
        getline(cin, in);
        stringstream sss(in);
        int num;
        while (sss >> num) {
            k = num;
        }
        Solution ob;
        int ans = ob.aggressiveCows(arr, k);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends