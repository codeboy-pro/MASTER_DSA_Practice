#include<iostream>
using namespace std;
void lower_to_upper(string &str,int index){
if(index==-1){
  return;
}

  str[index]='A'+str[index]-'a';
  lower_to_upper(str,index-1);
}
int main(){
string str="pradip";
lower_to_upper(str,5);

cout<<str<<endl;

  return 0;
}