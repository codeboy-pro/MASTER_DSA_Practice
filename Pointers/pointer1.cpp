#include<iostream>
using namespace std;
int main(){
int arr[5]={1,2,3,4,5};
int *ptr=arr;
//print the address of the first element or 0 index
cout<<arr<<endl;
cout<<arr+0<<endl;
cout<<&arr[0]<<endl;

cout<<ptr<<endl;
cout<<ptr+1<<endl;
cout<<*(ptr+1)<<endl;
cout<<*arr+6<<endl;
cout<<*(arr+3)<<endl;
cout<<3[ptr]<<endl;


    return 0;
}