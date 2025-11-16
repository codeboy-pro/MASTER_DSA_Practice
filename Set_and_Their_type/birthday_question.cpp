#include<iostream>
#include<set>
using namespace std;

int main(){

set<string>invitelist;
int n;
cout<<"Enter the number of friends:";
cin>>n;
cout<<"Enter the names of friends:";
while(n--){
   string name;
   cin>>name;
   invitelist.insert(name);
}
cout<<"The invited friends are:";
for(auto name:invitelist){
  cout<<name<<" ";
}
cout<<endl;
return 0;
}



