//print the matrix diagonally
#include<iostream>
using namespace std;
int main(){

    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int n=3;
    int i=0,k=0,j=0;
    int upper=1;
    int ans[n*n];

    while(k<n*n){
        if(upper==1){
            while(i>=0 && j<n){
ans[k++]=arr[i][j];
 if(j==n-1){
    i++;
    break;
}
else if(i==0){
    j++; 
    break;
}

i--;
j++;
            }
            upper=0;
        }
        else{
            while(i<n && j>=0){
                ans[k++]=arr[i][j];
                if(i==n-1){
                    j++;
                    break;
                }
                else if(j==0){
                    i++;
                    break;
                }
                i++;
                j--;
            }
            upper=1;
        }

    }
    for(int i=0;i<n*n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}