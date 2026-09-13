#include <iostream>
#include <vector>
using namespace std;
class SegmentTree
{

public:
    vector<long long> tree;
    int n;
   vector<long long>lazy;
  SegmentTree(vector<int>&arr){
    n=arr.size();
    tree.resize(4*n);
    lazy.resize(4*n,0);
    buildTree(0,0,n-1,arr);
  }
  void buildTree(int node,int start,int end,vector<int>&arr){
    if(start==end){
        tree[node]=arr[start];
        return ;
    }
    int mid=start+(end-start)/2;
    buildTree(2*node+1,start,mid,arr);
    buildTree(2*node+2,mid+1,end,arr);
    tree[node]=tree[2*node+1]+tree[2*node+2];
  }

  void updateEle(int node,int start,int end){
if(lazy[node]==0) return;
if(start==end){
    lazy[node]=0;
    return;
}
int mid=start+(end-start)/2;
int leftchild=2*node+1;
int rightchild=2*node+2;
tree[leftchild]+=lazy[node]*(mid-start+1);
tree[rightchild]+=lazy[node]*(end-mid);
lazy[leftchild]+=lazy[node];
lazy[rightchild]+= lazy[node];
lazy[node]=0;
  }

      
  void  updateQuerry(int node, int start, int end, int left, int right, int val)
  {
      if (start > right || end < left)
          return;
      if (start >= left && end <= right)
      {
          tree[node] += 1LL * val * (end - start + 1);
          lazy[node] += val;
          return;
      }
      updateEle(node, start, end);

      int mid = start + (end - start) / 2;
      updateQuerry(2 * node + 1, start, mid, left, right, val);
      updateQuerry(2 * node + 2, mid + 1, end, left, right, val);
      tree[node] = tree[2 * node + 1] + tree[2 * node + 2];
  }
  long long rangeQuery(int node,int start,int end,int left,int right){
    if(start>right || end<left) return 0;
    if(start>=left && end<=right) {
        return tree[node];
    }
    updateEle(node,start,end);
    int mid=start+(end-start)/2;
    int leftSum = rangeQuery(2*node+1,start,mid,left,right);
    int rightSum = rangeQuery(2*node+2,mid+1,end,left,right);
    return leftSum+rightSum;
  }
};

int main()
{
    vector<int> arr = {1, 5, 2, 6, 91, 8, 6, 8, 90, 11, 23, 10, 2, 4, 8, 19};
    SegmentTree st(arr);
    int n = arr.size();
    cout << st.rangeQuery(0, 0, n - 1, 3, 8);
    st.updateQuerry(0, 0, n - 1, 2, 8,10);
    cout << endl;
    cout << st.rangeQuery(0, 0, n - 1, 3, 8);
    return 0;
}