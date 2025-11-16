#include<iostream>
using namespace std;
int main(){
//create a 2d array
int n,m;//row=n,col=m;
cin>>n>>m;

int **ptr=new int *[n];

// create
for(int i=0;i<n;i++){
  ptr[i]=new int [m];
}

for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
    cin>>ptr[i][j];

  }
}
for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
    cout<<ptr[i][j]<<" ";
  }cout<<endl;
}


// release the heap memory
for(int i=0;i<n;i++){
  delete[] ptr[i];
}
delete[] ptr;
  return 0;
}