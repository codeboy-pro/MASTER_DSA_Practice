// https://leetcode.com/problems/subsets/submissions/1649374528
#include <iostream>
#include <vector>
using namespace std;

void subSequence(int arr[], int index, int n, vector<vector<int>> &ans, vector<int> &temp)
{
    if (index == n)
    {
        ans.push_back(temp); // Save the current subsequence (even if empty)
        return;
    }

    // Include the current element
    temp.push_back(arr[index]);
    subSequence(arr, index + 1, n, ans, temp);
    // Backtrack and exclude the current element
    temp.pop_back();
    subSequence(arr, index + 1, n, ans, temp);
}

int main()
{
    int arr[] = {1, 2, 3};
    vector<vector<int>> ans;
    vector<int> temp;

    subSequence(arr, 0, 3, ans, temp);

    // Print all subsequences
    for (int i = 0; i < ans.size(); i++)
    {
        // if(ans[i].empty()) cout << "{}"; // Handle empty subsequence

        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
