#include<iostream>
using namespace std;
int even_num(int *arr,int index){
  if(index==-1){
    return 0;
  }

return  arr[index]%2==0?1+even_num(arr,index-1):even_num(arr,index-1);

}
int main(){
int arr[]={14,3,4,6,90,13,10};
int N=7;
cout<<even_num(arr,N-1);



  return 0;
}