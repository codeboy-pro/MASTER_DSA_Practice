#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//name, age, weight


int main(){
pair<string,int> p1;
//Two method insert
// p=make_pair("Pradip",30);
// p.first="pradip";
// p.second=30;

// pair<string,pair<int,int>>p;
// p.first="Pradip";
// p.second.first=20;
// p.second.second=30;
pair<pair<string,int>,int>p;
p=make_pair(make_pair("Pradip",20),40);
cout<<p.first.first<<" "<<p.first.second<<" "<<p.second<<endl;

  return 0;
}