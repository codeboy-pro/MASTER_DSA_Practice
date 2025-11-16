#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
multimap<int,int>m;
// map<int,int>m;
m.insert(make_pair(20,30));
m.insert(make_pair(30,310));
m.insert(make_pair(20,200));
m.insert(make_pair(10,500));
// m[100]=900;//by using it I can insert the value and I will also update the value and it is not allowed for multimap

for(auto it=m.begin();it!=m.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
}

cout<<endl;
// if(m.count(200))
// cout<<m[200]<<endl;
// m.erase(100);
for(auto it=m.begin();it!=m.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
}
  return 0;
}

