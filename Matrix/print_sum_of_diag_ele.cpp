
#include<iostream>
using namespace std;


int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
int n=3;
int i=0;
int first=0,second=0;
while(i<3){//for first diag
    first+=arr[i][i];

    i++;
    
}
//second diag
  i=0;
  int j=3-1;
while(j>=0){
    second+=arr[i][j];
    i++,j--;

}
cout<<first<<" "<<second<<endl;
int sum=first+second;
if(n%2!=0){
sum=sum-arr[n/2][n/2];
}
cout<<sum;
return 0;

}