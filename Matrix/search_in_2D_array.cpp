#include<iostream>//Leatcode:74. Search a 2D Matrix

using namespace std;
int main(){
  int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
  int target=11;
  int n=3,m=4;
  int count=0;
cout<<"pradip";
  int row=0,col=m-1;
  while(row<n && col>=0){
    if(arr[row][col]==target){
count++;


    }
    else if(arr[row][col]<target){
      row++;
    }
    else{
      col--;
    }
  }
cout<<count<<endl;
  
    return 0;
}