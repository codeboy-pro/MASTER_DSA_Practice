#include<iostream>
using namespace std;
int main(){

int num=4;
int *p=&num;
*p+=5;
cout<<num;

    return 0;
}