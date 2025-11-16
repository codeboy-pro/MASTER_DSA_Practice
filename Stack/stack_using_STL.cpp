#include<iostream>
#include<stack>
using namespace std;

int main(){
stack<int>s;
s.push(4);
s.push(5);
s.push(6);
s.push(1);
cout<<s.size()<<endl;
s.pop();

cout<<s.size()<<endl;

cout<<s.top()<<endl;
cout<<s.empty()<<endl;

  return 0;
}
