#include<iostream>
using namespace std;
class Node{
public:
int data;
Node *next;

Node(int value){

  data=value;
  next=NULL;

}
};

Node *inset_node(int *arr,Node *Head,int index,int size){
  if(Head==NULL){
    Head=new Node(arr[index]);
   return inset_node(arr,Head,index+1,size);
  }
  if(index==size){
    return Head;
  }
Node *temp;
temp=new Node(arr[index]);
temp->next=Head;
Head=temp;
return inset_node(arr,Head,index+1,size);

}

int main(){
Node *Head;

Head=NULL;
int arr[]={2,4,6,8,10};

Head=inset_node(arr,Head,0,5);

Node *temp=Head;

while(temp){
  cout<<temp->data<<" ";
  temp=temp->next;

};


  return 0;



}