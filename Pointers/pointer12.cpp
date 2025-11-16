#include<iostream>
using namespace std;
int main(){
char arr[4]={'a','b','c','\0'};

cout<<(void*)&arr<<endl;
cout<<static_cast<void*>(arr)<<endl;

string str="Pradip";
// cout<<(void*)&str[2]<<endl;
int arr1[5]={1,2,3,4,5};
// int *ptr=arr1;
// cout<<arr1<<endl;
// cout<<&arr1<<endl;
int *ptr1=&arr1[4];
for(int i=4;i>=0;i--){
  cout<<*(ptr1-(4-i))<<endl;
}


  return 0;
}