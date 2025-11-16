
#include<iostream>
#include<vector>
using namespace std;
void sub(string s,int n,int index,vector<string>&ans,string temp){
  if(index==n){
    ans.push_back(temp);
    return;
  }
  temp.push_back(s[index]);
  sub(s,n,index+1,ans,temp);
  temp.pop_back();
  sub(s,n,index+1,ans,temp);

}


int main() {
//abcd    a,b,c,d,ab,ac,....
string s="abcd";
vector<string >ans;
string temp;
sub(s,s.size(),0,ans,temp);
for(int i=0;i<ans.size();i++){
cout<<ans[i]<<endl;
}
    return 0;
}
