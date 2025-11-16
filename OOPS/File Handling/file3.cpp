#include<iostream>
#include<vector>
#include <algorithm>
#include<fstream>


using namespace std;


int main(){
vector<int>arr(5);
cout<<"Enter the input:";
for(int i=0;i<5;i++){
  cin>>arr[i];
}

//open the file
ofstream fout;
fout.open("zero.txt");
fout<<"Original data\n";
for(int i=0;i<5;i++){
fout<<arr[i]<<" ";
};
fout<<"\nsorted data\n";
sort(arr.begin(),arr.end());
for(int i=0;i<5;i++){
fout<<arr[i]<<" ";
};
fout.close();



  return 0;
}