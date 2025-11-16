#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//push_front(),push_back()
//size
//pop_front(),pop_back()
//iterrator


int main()
{
  list<int> l;
  l.push_back(20);
  l.push_back(30);
  l.push_back(40);
  l.push_back(50);
  l.push_front(15);
  // cout << l.front() << " " << l.back() << endl;
  // cout<<l.size();
  //   for(list<int>::iterator it=l.begin();it!=l.end();it++){
  //   cout<<*it<<endl;
  // }
  // for(auto it=l.begin();it!=l.end();it++){
  //   cout<<*it<<endl;
  // }

    for(auto it=l.rbegin();it!=l.rend();it++){
    cout<<*it<<endl;
  }
  return 0;
}

