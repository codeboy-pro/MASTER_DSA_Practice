#include<iostream>

#include<deque>
using namespace std;


int main(){
  deque<int>d;
d.push_back(12);
d.push_back(80);
d.push_back(82);
d.pop_back();
cout<<d.back()<<endl;

}