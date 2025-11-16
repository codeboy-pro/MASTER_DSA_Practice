// C++ program to find Maximum difference
// between two elements such that larger
// element appears after the smaller number
#include <bits/stdc++.h>
using namespace std;

int maxDiff(vector<int> &arr) {
int n=arr.size();
int ans=INT8_MIN;
for(int i=0;i<n-1;i++){
 for(int j=i+1;j<n;j++){
    ans=max(ans,arr[j]-arr[i]);
 }

}
return ans;//time complexity :o(n^2)
}

int main() {
	vector<int> arr = {2, 3, 10, 6, 4, 8, 1};
	cout << maxDiff(arr);
	return 0;
}
