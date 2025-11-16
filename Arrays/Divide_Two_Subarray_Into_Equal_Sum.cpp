#include<iostream>
using namespace std;
void susu(int sum1,int sum2){
    if(sum1==sum2){
        cout<<1;
        
       }
    
}//time complexity :o(n)
int main(){
int n=8;
int arr[8]={3,4,-2,5,8,20,-10,8};
for(int i=0;i<n;i++){
int sum1=0,sum2=0;
for(int j=0;j<=i;j++){
    sum1+=arr[j];
}
for(int k=i+1;k<n;k++){
    sum2+=arr[k];

}
susu(sum1,sum2);


}

    return 0;
}