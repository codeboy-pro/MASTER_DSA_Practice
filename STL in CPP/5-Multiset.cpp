#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//Duplicate ele will be present
//Red black tree ,AVL tree


int main()
{
multiset<int>s;
s.insert(10);
s.insert(20);
s.insert(150);
s.insert(10);
s.erase(10);
for(auto it=s.begin();it!=s.end();it++){
    cout<<*it<<" ";
}

  return 0;
}