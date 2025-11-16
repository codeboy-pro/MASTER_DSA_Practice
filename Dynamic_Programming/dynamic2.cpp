#include<iostream>
using namespace std;
int main(){
//Creating a dynamic integer variable
int *ptr1=new int;
*ptr1=34;
cout<<*ptr1<<endl;
cout<<ptr1<<endl;
float *ptr2=new float;
*ptr2=22.4;
cout<<*ptr2<<endl;
cout<<ptr2<<endl;
  int n;
  cout<<"Enter the n:";
  cin>>n;

int *p=new int[n];
for(int i=0;i<n;i++){
  p[i]=i+2;

}
for(int i=0;i<n;i++){
  cout<<p[i]<<endl;
}
  return 0;
}