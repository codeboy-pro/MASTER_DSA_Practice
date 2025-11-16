
#include<iostream>//print sum of each column in 2-d array
using namespace std;

int main(){
 int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};//time complexity:o(n^2);
 int sum1=0,sum2=0,sum3=0,sum4=0;
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        if(j==0){
            sum1+=arr[i][j];
        }
       else  if(j==1){
            sum2+=arr[i][j];
        }
       else if(j==2){
            sum3+=arr[i][j];
        }
      else  if(j==3){
            sum4+=arr[i][j];
        }

    }
}
cout<<sum1<<" "<<sum2<<" "<<sum3<<" "<<sum4<<endl;

    return 0;
}

// 15 18 21 24