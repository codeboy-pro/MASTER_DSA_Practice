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
int main(){
Node *Head,*Tail;
Head=Tail=NULL;
int arr[]={1,2,3,4,5};
for(int i=0;i<5;i++){
  if(Head==NULL){
    Head=new Node(arr[i]);
    Tail=Head;
  }
  else{
    Tail->next=new Node(arr[i]);
    Tail=Tail->next;

  }
}
Node *temp1=Head;
int x;
cout<<"Enter the position for inserting the Node:";
cin>>x;
int Node_data;
cout<<"Enter the data of the Node you want to insert:";
cin>>Node_data;

x--;

while(x--){
  temp1=temp1->next;
}
Node *temp2=new Node(Node_data);
temp2->next=temp1->next;
temp1->next=temp2;


Node *temp=Head;
while(temp){
  cout<<temp->data<<" ";
  temp=temp->next;

}

  return 0;
}