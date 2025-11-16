#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//unique keys are present, duplicate keys are not allowed
// unordered_map stores elements in an unspecified (hash-based) order.
// If you need keys to be kept in sorted order, use std::map<int,int> instead.

//Hashing 
//insert ,search and delete constant time execution
//Unordered_multimap
int main()
{

  unordered_multimap<int,int>m;
// map<int,int>m;
m.insert(make_pair(20,30));
m.insert(make_pair(30,310));
m.insert(make_pair(90,200));
m.insert(make_pair(20,500));
// m[70]=700;

for(auto it=m.begin();it!=m.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
}
  return 0;
}

