#include<iostream>
using namespace std;
int main(){
char arr[5]="1234";
char *ptr=arr;
cout<<arr<<endl;
cout<<ptr<<endl;
cout<<(void*)arr<<endl;//typecasting
cout<<static_cast<void*>(arr)<<endl;
cout<<(void*)ptr<<endl;
float arr1[4]={1.2,3,5.6,6.7};//like int 

float *ptr1=arr1;

cout<<arr1<<endl;

cout<<ptr1<<endl;



char name='a';
cout<<(void*)&name;

    return 0;
}