
#include<iostream>
using namespace std;//suing lower triangle;


int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;

    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
int n=3;
for(int i=1;i<3;i++){
    for(int j=0;j<i;j++){
        int temp=arr[i][j];
        arr[i][j]=arr[j][i];
        arr[j][i]=temp;

    }
}
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<arr[i][j]<<" ";
    }cout<<endl;

}
return 0;

}