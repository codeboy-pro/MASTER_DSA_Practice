#include<iostream>//Leatcode sol:https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/solutions/6569470/two_sum-by-pradip9907maity-lt6m/

using namespace std;
int main(){
int arr1[2];
int n=7;
int arr[7]={1,3,5,7,9,10,20};
int target=27;
int start=0,end=n-1;
int count=0;
while(start<end){
    if(arr[start]+arr[end]==target){
        arr1[0]=arr[start];
        arr1[1]=arr[end];
count++;
        break;

    }
    else if(arr[start]+arr[end]>target){
end--;
    }
    else{
        start++;
    }

}
cout<<arr1[0]<<" "<<arr1[1]<<endl;
    return 0;
}