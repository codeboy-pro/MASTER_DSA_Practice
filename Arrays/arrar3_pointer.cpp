#include<iostream>
#include<vector>
using namespace std;

int main(){
//A : [1, 4, 10]
// B : [2, 15, 20]
// C : [10, 12]
int arr1[]={1,4,10};
int arr2[]={2,15,20};
int arr3[]={10,12};
int n=3;
int max_dif=0;
int mini_of_max=INT8_MAX;
for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
    for(int k=0;k<2;k++){
        
        max_dif=abs(arr1[i]-arr2[j]);
        if(abs(arr2[j]-arr3[k])>max_dif){
            max_dif=abs(arr2[j]-arr3[k]);
        }
        else if(abs(arr3[k]-arr1[i])>max_dif){
            max_dif=abs(arr3[k]-arr1[i]);
        }
mini_of_max=min(mini_of_max,max_dif);

    }

  }
}
cout<<mini_of_max<<endl;
return 0;
}