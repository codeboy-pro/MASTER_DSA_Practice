
#include<iostream>
#include<vector>
using namespace std;

void subset(string s, int index, int n, vector<string>&ans, string temp) {
    if(index == n) {
        ans.push_back(temp); // Save the current subset (even if empty)
        return;
    }



    // Include the current element
    temp.push_back(s[index]);
    subset(s, index + 1, n, ans, temp);
 // Backtrack and exclude the current element
    temp.pop_back() ;
    subset(s, index + 1, n, ans, temp);
   
}

int main() {
    string s="abcd";

    vector<string>ans;
  string temp;

    subset(s, 0, s.size(), ans, temp);

    // Print all subsequences
  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<endl;
  }

    return 0;
}
