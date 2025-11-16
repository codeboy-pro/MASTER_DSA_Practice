// C++ program to find Maximum difference
// between two elements such that larger
// element appears after the smaller number
#include <bits/stdc++.h>
using namespace std;

int maxDiff(vector<int> &arr) {
int n=arr.size();
int suffix=INT8_MIN,ans=INT8_MIN;
for(int i=n-2;i>=0;i--){
    suffix=max(suffix,arr[i+1]);
ans=max(ans,suffix-arr[i]);
}
return ans;
}//o(n)

int main() {
	vector<int> arr = {2, 3, 10, 6, 4, 8, 1};
	cout << maxDiff(arr);
	return 0;
}
