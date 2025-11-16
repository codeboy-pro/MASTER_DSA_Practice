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
Node *create_Linked_List(int *arr,int index,int size){
  if(index==size){
    return NULL;
  }
Node *temp=new Node(arr[index]);
temp->next=create_Linked_List(arr,index+1,size);
return temp;


}
int main(){

Node *Head;
int arr[]={1,3,5,6,8};
int size=5;
Head=create_Linked_List(arr,0,size);
if(Head->next==NULL){
  Node *temp=Head;
  Head=NULL;
  delete temp;
}
else{
Node *curr=Head;
Node *prev=NULL;
while(curr->next!=NULL){
  prev=curr;
  curr=curr->next;
}
delete curr;
prev->next=NULL;
Node *temp=Head;
while(temp){
  cout<<temp->data<<" ";
  temp=temp->next;
  
}


}
  return 0;
}