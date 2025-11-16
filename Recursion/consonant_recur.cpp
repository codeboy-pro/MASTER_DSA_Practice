#include<iostream>
using namespace std;
int count_con(string &str,int index){
if(index==-1){
  return 0;
}

  //vowel
  if(str[index]=='a'||str[index]=='e'||str[index]=='i'||str[index]=='o'||str[index]=='u'){
    return count_con(str,index-1);
  }
  else{
    return 1+count_con(str,index-1);
  }
}
int main(){
string str="pradipmaity";
int n=11;
cout<<count_con(str,n-1);



  return 0;
}