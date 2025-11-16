#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
// unordered_set<int>s;
unordered_multiset<int>s;
s.insert(10);
s.insert(20);
s.insert(20);
s.insert(153);
s.insert(90);
s.insert(23);
s.insert(3);
for(auto it=s.begin();it!=s.end();it++){
    cout<<*it<<" ";
}
  return 0;
}
 
//set ,unoredred set,multiset,unorered_multiset
