
#include<iostream>
#include<vector>
using namespace std;

int main(){
    
int n=4;
vector<vector<int>>ans(n,vector<int>(n,0));

int row=n,col=n;
int left=0,right=col-1,top=0,bottom=row-1;
int num=1;
while(left<=right && top<=bottom && num<=n*n){

    for(int j=left;j<=right;j++){
        ans[top][j]=num;
        num++;
    }
    top++;
    
    for(int i=top;i<=bottom;i++){
        ans[i][right]=num;
        num++;
    }
    right--;
if(top<=bottom){
    for(int j=right;j>=left;j--){
        ans[bottom][j]=num;
        num++;
    }
    bottom--;

}
if(left<=right){
    for(int i=bottom;i>=top;i--){
        ans[i][left]=num;
        num++;
    }
    left++;
}

}

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
cout<<ans[i][j]<<" ";
    }cout<<endl;
}




return 0;

}