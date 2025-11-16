
#include<iostream>
using namespace std;

void print_row(int arr[][4],int row,int col){
int index=-1,sum=INT8_MIN;
for(int i=0;i<row;i++){
    int total=0;
    for(int j=0;j<col;j++){
        total+=arr[i][j];
if(total>sum){
    sum=total;
    index=i;
}
    }
}
cout<<index<<endl;
}
int main(){
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
print_row(arr,3,4);
return 0;

}