#include<iostream>
#include<vector>
using namespace std;//time com: o(n),space com:o(n)
int main(){
vector<int>vec{0,1,0,2,1,0,1,3,2,1,2,1};
int n=12;
int leftmax[n],rightmax[n];
leftmax[0]=0;
for(int i=1;i<n;i++){
leftmax[i]=max(leftmax[i-1],vec[i-1]);
}

rightmax[n-1]=0;
for(int i=n-2;i>=0;i--){
rightmax[i]=max(rightmax[i+1],vec[i+1]);

}
int water=0;
int minheight;
for(int i=0;i<n;i++){
    minheight=min(leftmax[i],rightmax[i]);
    if(minheight-vec[i]>=0){
        water+=(minheight-vec[i]);
    }
}
cout<<water<<endl;

    return 0;

}