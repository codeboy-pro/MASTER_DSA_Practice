#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int celebrity(vector<vector<int>> &mat)
{
  // code here
  int n = mat.size();

  stack<int> st;
  for (int i = n - 1; i >= 0; i--)
  {
    st.push(i);
  }
  int first, second;

  while (st.size() > 1)
  {
    first = st.top();
    st.pop();
    second = st.top();
    st.pop();
    if (mat[first][second] && !mat[second][first])
    {
      st.push(second);
    }
    else if (!mat[first][second] && mat[second][first])
    {
      st.push(first);
    }
  }
  if (st.empty())
  {
    return -1;
  }

  int num = st.top();

  st.pop();

  int row = 0, col = 0;
  for (int j = 0; j < n; j++)
  {
    row += mat[num][j];
    col += mat[j][num];
  }

  // Check two possible conditions:
  // 1. Celebrity doesn't know anyone (including themselves): row == 0, col == n-1
  // 2. Celebrity only knows themselves: row == 1 && mat[num][num] == 1, col == n
  bool condition1 = (row == 0 && col == n - 1);
  bool condition2 = (row == 1 && mat[num][num] == 1 && col == n);

  return (condition1 || condition2) ? num : -1;
}
int main()
{
  // Test case 1: Celebrity at index 1
  vector<vector<int>> mat1 = {
      {0, 1, 0},
      {0, 0, 0},
      {0, 1, 0}};

  cout << "Test 1 - Celebrity index: " << celebrity(mat1) << " (Expected: 1)" << endl;

  // Test case 2: No celebrity
  vector<vector<int>> mat2 = {
      {0, 1, 0},
      {1, 0, 0},
      {0, 1, 0}};

  cout << "Test 2 - Celebrity index: " << celebrity(mat2) << " (Expected: -1)" << endl;

  // LeetCode test case
  vector<vector<int>> mat3 = {
      {1, 1, 0},
      {0, 1, 0},
      {0, 1, 1}};

  cout << "LeetCode Test - Celebrity index: " << celebrity(mat3) << " (Expected: 1)" << endl;

  return 0;
}