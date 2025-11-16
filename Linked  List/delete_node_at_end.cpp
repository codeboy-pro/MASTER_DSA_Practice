#include <iostream>
using namespace std;
class Node
{
public:
  int data;
  Node *next;
  Node(int value)
  {
    data = value;
    Node *next;
  }
};
Node *CreateLinkedList(int arr[], int index, int size)
{
  if (index == size)
  {
    return NULL;
  }
  Node *temp = new Node(arr[index]);
  temp->next = CreateLinkedList(arr, index + 1, size);
  return temp;
}
int main()
{
  Node *Head;
  Head = NULL;
  int arr[] = {2, 4, 6, 1, 7};

  Head = CreateLinkedList(arr, 0, 5);
  // Head=NULL;

  // Delete a node at end
if(Head!=NULL){
  if(Head->next==NULL){
    Node*temp=Head;
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
  }
}

  while (Head)
  {
    cout << Head->data << " ";
    Head = Head->next;
  }
  return 0;
}