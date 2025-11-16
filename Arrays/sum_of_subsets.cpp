
#include <iostream>
#include <vector>
using namespace std;

void subSequence(int arr[], int index, int n, vector<vector<int>> &ans, vector<int> &temp,int *sum)
{
    if (index == n)
    {
      for(int j=0;j<temp.size();j++){
        *sum+=temp[j];
      }
        ans.push_back(temp); // Save the current subsequence (even if empty)
        return;
    }

    // Include the current element
    temp.push_back(arr[index]);
    subSequence(arr, index + 1, n, ans, temp,sum);
    // Backtrack and exclude the current element
    temp.pop_back();
    subSequence(arr, index + 1, n, ans, temp,sum);
}

int main()
{
    int arr[] = {1, 2, 3};
    vector<vector<int>> ans;
    vector<int> temp;
int sum=0;
    subSequence(arr, 0, 3, ans, temp,&sum);

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
cout<<sum<<endl;
    return 0;
}
