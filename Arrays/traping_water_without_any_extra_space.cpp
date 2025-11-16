#include<iostream>
#include<vector>
using namespace std;//time com: o(n),space com:o(1)
int main(){
vector<int>height{0,1,0,2,1,0,1,3,2,1,2,1};
int n=12,water=0;
int leftmax=0,rightmax=0,index=0;
int max_height=height[0];
for(int i=0;i<n;i++){
    if(height[i]>max_height){
        max_height=height[i];
        index=i;
    }
}
for(int i=0;i<index;i++){
    if(leftmax>height[i]){
water+=(leftmax-height[i]);
    }
    else{
        leftmax=height[i];
    }
}
for(int i=n-1;i>index;i--){
    if(rightmax>height[i]){
        water+=(rightmax-height[i]);
    }
    else{
        rightmax=height[i];
    }
}


cout<<water<<endl;
    return 0;
    
}