#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
vector<int>arr(5);
cout<<"Enter the elements of the array:"<<endl;

for(int i=0;i<5;i++){
  cin>>arr[i];

}


ofstream fout;
fout.open("res.txt");
fout<<"Original data: "<<endl;

for(int i=0;i<5;i++){
  fout<<arr[i]<<" ";

}
fout<<endl;
fout<<"sorted data";
sort(arr.begin(),arr.end());

for(int i=0;i<5;i++){
  fout<<arr[i]<<" ";

}


fout.close();

  return 0;
}