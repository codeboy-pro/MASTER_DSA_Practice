#include<iostream>
#include<set>
using namespace std;


int main(){

// set<int,greater<int>>set1;
//insertion in a set

set<int>set1;
set1.insert(1);
set1.insert(2);
set1.insert(3);
set1.insert(4);
set1.insert(5);

// cout<<set1.size()<<" ";
// set1.insert(5);
// cout<<set1.size()<<" "<<endl;
//size remains same because duplicate  value is added and sets contain unique values

// set<int>::iterator itr;
//traversing in a set
// for(itr=set1.begin();itr!=set1.end();itr++){
//   cout<<*itr<<" ";

// }
// cout<<endl;

// for(auto value:set1){
//   cout<<value<<" ";
// }cout<<endl;



//deleting element from a set
// deleting via value 
// set1.erase(3);

//deleting via indexing

// auto itr=set1.begin();
// advance(itr,2);
// set1.erase(itr);


//deleting in range
auto start_itr=set1.begin();
start_itr++;//2


auto end_itr=set1.begin();
advance(end_itr,3);//4


set1.erase(start_itr,end_itr);
for(auto value:set1){
  cout<<value<<" ";
}cout<<endl;


if(set1.find(9)!=set1.end()){
  cout<<"Value is present"<<endl;
}else{
  cout<<"value is not present"<<endl;
}



  return 0;
}