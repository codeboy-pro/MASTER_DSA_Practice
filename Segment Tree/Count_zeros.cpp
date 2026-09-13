#include <iostream>
#include <vector>
using namespace std;
class SegmentTree
{

public:
    vector<int> tree;
    int n;
    SegmentTree(vector<int> &arr)
    {
        n = arr.size();
        tree.resize(4 * n,0);
        buildTree(0, 0, n - 1, arr);
    }
    void buildTree(int node, int start, int end, vector<int> &arr)
    {
        if (start == end)
        {
            if(arr[start]==0)
            tree[node]= 1;
            else tree[node]=0;
            return;
        }
        int mid = start + (end - start) / 2;
        buildTree(2 * node + 1, start, mid, arr);
        buildTree(2 * node + 2, mid + 1, end, arr);
        tree[node] = tree[2 * node + 1] + tree[2 * node + 2];
    }
    int rangeQuery(int node, int start, int end, int left, int right)
    {
        // out of range
        if (end < left || start > right)
            return 0;
        if (left <= start && end <= right)
        {
            return tree[node];
        }
        int mid = start + (end - start) / 2;
        int leftSum = rangeQuery(2 * node + 1, start, mid, left, right);
        int rightSum = rangeQuery(2 * node + 2, mid + 1, end, left, right);
        return leftSum + rightSum;
    }

    void UpdateQuery(int node, int start, int end, int index, int val)
    {
        if (start == end)
        {    if(val==0)
            tree[node]= 1;
            else
                tree[node] = 0;
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

        tree[node] = tree[2 * node + 1] + tree[2 * node + 2];
    }
};

int main()
{
    vector<int> arr = {
        1, 5, 2, 6, 5, 0, 6, 0,
        0, 11, 23, 10, 2, 4, 8, 19};

    SegmentTree st(arr);

    int n = arr.size();

    cout << st.rangeQuery(0, 0, n - 1, 3, 8); // 3

    // Change index 5: 0 -> 5
    st.UpdateQuery(0, 0, n - 1, 4, 0);

    cout << endl;

    cout << st.rangeQuery(0, 0, n - 1, 3, 8); // 2

    return 0;
}