#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void wave_print(int arr[][4],int row,int col){
for(int j=0;j<col;j++){
    if(j%2==0){
        for(int i=0;i<row;i++){
            cout<<arr[i][j]<<" ";
        }
    }
    else{
        for(int i=row-1;i>=0;i--){
            cout<<arr[i][j]<<" ";
        }
    }
}
}

int main(){
int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
wave_print(arr,3,4);
return 0;
}