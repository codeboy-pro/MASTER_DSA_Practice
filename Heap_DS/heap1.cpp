#include<iostream>
using namespace std;
class MaxHeap{
    int *arr;
    int size;//total size of MaxHeap
    int total_size;//total size of std::array<T, N> ;
    public:
       MaxHeap(int n){
           arr=new int[n];
           size=0;
           total_size=n;
       }
       
       //insert into the MaxHeap
       void insert(int val){
           //if heap size is available or not
           if(size==total_size){
               cout<<"Heap is Overflow\n";
               return ;
           }
           arr[size]=val;
           int index=size;
           size++;
           
           //compare it with its parent
           while(index>0 && arr[(index-1)/2]<arr[index]){
               swap(arr[index],arr[(index-1)/2]);
               index=(index-1)/2;
               
           }
           
           cout<<arr[index]<< " is inserted in the heap\n";
           
           
       }
       
       
       
       
       void print(){
           for(int i=0;i<size;i++){
               cout<<arr[i]<<" ";
           }
           cout<<endl;
       }
};



int main(){
    MaxHeap H1(6);
    
    H1.insert(6);
    H1.insert(4);
    H1.insert(11);
    H1.insert(8);
    H1.insert(15);
    H1.print();
    return 0;
}