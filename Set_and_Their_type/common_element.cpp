#include<iostream>
#include<set>
#include<vector>

using namespace std;
int main(){
vector<int>v1(5,0);
vector<int>v2(5,0);
int n=5,m=5;
cout<<"Enter the ele of arr 1:";
for(int i=0;i<n;i++){
 cin>>v1[i];
}
cout<<"Enter the ele of arr 2:";
for(int i=0;i<m;i++){
 cin>>v2[i];
}
int ans_sum=0;
set<int>s1;
for(auto ele:v1){
  s1.insert(ele);
}
for(auto ele:v2){
  if(s1.find(ele)!=s1.end()){
    ans_sum+=ele;
  }

}
cout<<"The sum is:"<<ans_sum<<endl;
  return 0;
}

//mlog(t)