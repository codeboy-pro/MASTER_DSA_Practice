#include<iostream>
using namespace std;
class Node{
public:
int data ;
Node *next;
Node *prev;
Node(int value){
  data=value;
  next=NULL;
  prev=NULL;

}
};





Node *CreateDLL(int arr[],int index,int size,Node *back){
  if(index==size){
    return NULL;
  }
Node *temp=new Node(arr[index]);
temp->prev=back;
temp->next=CreateDLL(arr,index+1,size,temp);
return temp;



}


int main(){

Node *head=NULL;

int arr[]={1,2,3,4,9};
head=CreateDLL(arr,0,5,NULL);


int pos=3;
if(pos==0){
  //Linkedlist does not exist
if(head==NULL){
  head=new Node(5);

}
  //Linkedlist exist 
else{
  Node *temp=new Node(5);
  temp->next=head;
  head->prev=temp;
  head=temp;

}
}
else{
  Node *curr=head;
//Go to the Node ,after which I have to insert

while(--pos){
  curr=curr->next;
}

  //insert at end
if(curr->next==NULL){
  Node *temp=new Node(5);
  temp->prev=curr;
  curr->next=temp;

}

  //insert at mmid
else{
  Node *temp=new Node(5);
  temp->next=curr->next;
  temp->prev=curr;
  curr->next=temp;
  temp->next->prev=temp;
}
}

Node *trav=head;
while(trav){
  cout<<trav->data<<" ";
  trav=trav->next;
}

  return 0;
}