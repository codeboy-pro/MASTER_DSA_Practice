//2: Bubble Sort Algorithm to sort the array of integers in increasing order by taking the smallest number to first place by starting from the last. Question was explained in the class.
#include <iostream>//1: Use Bubble Sort Algorithm to sort the array of integers in decreasing order.

using namespace std;
int main()
{
    int arr[1000];
    int n;
    cout << "Enter the size of element:";
    cin >> n;
    cout << "Enter the elements of array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i=0;i<=n-2;i++)
    {
        bool swapped = 0;
        for (int j=n-1;j>=i+1;j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swapped = 1;

                swap(arr[j], arr[j - 1]);
            }
        }
        if (swapped == 0)
        {
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
    return 0;
}