#include <iostream>
using namespace std;

void rotate(int *arr, int index)
{
  if (index == 0)
  { // base case
    return;
  }
  int x = arr[index];
  arr[index] = arr[index - 1];
  arr[index - 1] = x;
  rotate(arr, index - 1);
}
int main()
{

  int arr[] = {1, 2, 3, 4, 5,9};
  int n = 6;
  rotate(arr, n-1);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}