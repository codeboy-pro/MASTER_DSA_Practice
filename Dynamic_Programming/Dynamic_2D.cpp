#include<iostream>
using namespace std;
int main(){

//Create the array whhich stores the address
int n,m;//rows=n,col=m
cin>>n>>m;
int **ptr=new int *[n];
//create 2d array
for(int i=0;i<n;i++){
  ptr[i]=new int[m];
}
for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
    cin>>ptr[i][j];
  }
}
for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
   cout<<ptr[i][j]<<" ";

  }
  cout<<endl;
}


//relase the memory ,heap mein

for(int i=0;i<n;i++){
  delete[] ptr[i];
}
delete[] ptr;

  return 0;
}