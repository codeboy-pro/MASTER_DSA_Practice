#include<iostream>
#include<queue>
using namespace std;


int main(){
queue<int>q;
q.push(20);
q.push(24);
q.push(120);
q.push(76);
q.pop();


cout<<q.front()<<endl;

cout<<q.back()<<endl;
cout<<q.empty()<<endl;
cout<<q.size()<<endl;


  return 0;
}