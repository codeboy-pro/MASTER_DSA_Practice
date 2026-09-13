#include <iostream>
#include <vector>
using namespace std;

class SegmentTree
{
public:
    int n;
    vector<int> freq;
    vector<int> tree;
    SegmentTree(vector<int> &arr)
    {
        n = arr.size();
        tree.resize(4 * n);
        freq.resize(4 * n);
        buildTree(0, 0, n - 1, arr);
    }
    void buildTree(int node, int start, int end, vector<int> &arr)
    {
        if (start == end)
        {
            tree[node] = arr[start];
            freq[node] = 1;
            return;
        }
        int mid = start + (end - start) / 2;
        buildTree(2 * node + 1, start, mid, arr);
        buildTree(2 * node + 2, mid + 1, end, arr);
        int left = 2 * node + 1;
        int right = 2 * node + 2;
        if (tree[left] > tree[right])
        {
            tree[node] = tree[left];
            freq[node] = freq[left];
        }
        else if (tree[left] < tree[right])
        {
            tree[node] = tree[right];
            freq[node] = freq[right];
        }
        else
        {
            tree[node] = tree[left];
            freq[node] = freq[left] + freq[right];
        }
    }

    vector<int> rangeQuery(int node, int start, int end, int left, int right)
    {
        if (start > right || end < left)
        {
            return {-1000000000, 0};
        }
        if (start >= left && end <= right)
        {
            return {tree[node], freq[node]};
        }

        int mid = start + (end - start) / 2;
        vector<int> leftAns = rangeQuery(2 * node + 1, start, mid, left, right);
        vector<int> rightAns = rangeQuery(2 * node + 2, mid + 1, end, left, right);

        if (leftAns[0] > rightAns[0])
            return leftAns;
        else if (leftAns[0] < rightAns[0])
            return rightAns;
        else
        {
            return {
                leftAns[0],
                leftAns[1] + rightAns[1]};
        }
    }

    void UpdateQuery(int node, int start, int end, int index, int val)
    {
        if (start == end)
        {
            tree[node] = val;
            freq[node] = 1;
            return;
        }

        int mid = start + (end - start) / 2;

        if (index <= mid)
        {
            UpdateQuery(2 * node + 1, start, mid, index, val);
        }
        else
        {
            UpdateQuery(2 * node + 2, mid + 1, end, index, val);
        }

        int left = 2 * node + 1;
        int right = 2 * node + 2;

        if (tree[left] > tree[right])
        {
            tree[node] = tree[left];
            freq[node] = freq[left];
        }
        else if (tree[left] < tree[right])
        {
            tree[node] = tree[right];
            freq[node] = freq[right];
        }
        else
        {
            tree[node] = tree[left];
            freq[node] = freq[left] + freq[right];
        }
    }
};

int main()
{
    vector<int> arr = {
        1, 5, 92, 6, 92, 8, 6, 8,
        92, 11, 23, 10, 92, 4, 8, 19};

    SegmentTree st(arr);

    int n = arr.size();

    // Query [3, 8]
    vector<int> ans = st.rangeQuery(
        0, 0, n - 1, 3, 8);

    cout << "Maximum = " << ans[0] << endl;
    cout << "Frequency = " << ans[1] << endl;

    // Update index 4 from 91 to 5
    st.UpdateQuery(
        0, 0, n - 1, 4, 5);

    // Query again
    ans = st.rangeQuery(
        0, 0, n - 1, 3, 8);

    cout << "After update:" << endl;
    cout << "Maximum = " << ans[0] << endl;
    cout << "Frequency = " << ans[1] << endl;

    return 0;
}