#include<iostream>
#include<vector>
using namespace std;
void pass(vector<int>&v){
    for(int i=0;i<v.size();i++){
        v[i]=20;
    }
}
void swap(int &p1,int &p2){//swaping by using reference variable

int temp=p1;
p1=p2;
p2=temp;
}
void dou(int p[]){
for(int i=0;i<5;i++){
p[i]*=2;
}
}
int main(){
    int num=10;
    cout<<num<<endl;
    int &temp=num;
temp++;
cout<<num<<endl;
int a=2,b=3;
swap(a,b);
cout<<a<<" "<<b<<endl;
vector<int>v(5,0);
pass(v);


//vector,string reference  help
//int arr , char arr pointer ki help se

for(int i=0;i<5;i++){
    cout<<v[i]<<" ";
}cout<<endl;
int arr[5]={1,3,5,6,8};
dou(arr);
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
return 0;
}