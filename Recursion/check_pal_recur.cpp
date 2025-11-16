#include<iostream>
using namespace std;
bool check_pal(string str,int start,int end){
if(str[start]!=str[end]){
  return 0;
}
if(start>=end){
  return 1;
}
else{
  return check_pal(str,start+1,end-1);

}


}
int main(){
string str="taman";
cout<<check_pal(str,0,4);


  return 0;
}