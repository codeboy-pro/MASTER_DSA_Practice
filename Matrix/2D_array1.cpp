
#include<iostream>
using namespace std;
void print_col(int arr[][4],int row,int col){
for(int j=0;j<col;j++){
    for(int i=0;i<row;i++){
        cout<<arr[i][j]<<" ";
    }cout<<endl;
}
}
int main(){


    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    //print all value in column wise
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";

        }cout<<endl;
    }
cout<<endl;
    //print all the values in rows
    print_col(arr,3,4);

    //find the ele in our array
    int x=7;

for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
if(arr[i][j]==x){
    cout<<"yes"<<endl;
    return 0;
}
    }
}
cout<<"No";
}