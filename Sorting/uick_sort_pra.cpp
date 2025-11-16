#include <iostream>
using namespace std;
#include <vector>
int partition(int *arr, int start, int end)
{
  int pos = start;
  for (int i = start; i <= end; i++)
  {
    if (arr[i] <= arr[end])
    {
      swap(arr[i], arr[pos]);
      pos++;
    }
  }
  return pos - 1;
}
void quick(int *arr, int start, int end)
{
  if(start>=end){
    return;
  }
  int pivot = partition(arr, start, end);
  quick(arr, start, pivot - 1);
  quick(arr, pivot + 1, end);
}
int main()
{
  int arr[] = {2, 1, 4, 3, 5, 7};
  int n = 6;
  quick(arr, 0, n - 1);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}