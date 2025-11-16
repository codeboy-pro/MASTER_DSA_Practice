#include<iostream>
using namespace std;
int main(){
//variable heap memory allocate
int *ptr= new int ;
*ptr=5;//value asign
cout<<*ptr<<endl;
float *ptr2=new float;
*ptr2=4.7;
cout<<*ptr2<<endl;
int n;
cin>>n;
int *p=new int[n];
for(int i=0;i<n;i++){
  p[i]=i+1;

}
for(int i=0;i<n;i++){
  cout<<p[i]<<endl;
}

  return 0;
}