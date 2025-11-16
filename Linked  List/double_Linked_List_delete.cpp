#include <iostream>
using namespace std;
class Node
{
public:
  int data;
  Node *next;
  Node *prev;
  Node(int value)
  {
    data = value;
    next = NULL;
    prev = NULL;
  }
};

Node *CreateDLL(int arr[], int index, int size, Node *back)
{
  if (index == size)
  {
    return NULL;
  }
  Node *temp = new Node(arr[index]);
  temp->prev = back;
  temp->next = CreateDLL(arr, index + 1, size, temp);
  return temp;
}

int main()
{

  Node *head = NULL;

  int arr[] = {1, 2, 3, 4, 9};
  head = CreateDLL(arr, 0, 5, NULL);
  // delete at start
  // if(head!=NULL){
  //   if(head->next==NULL){
  //     delete head;
  //     head=NULL;

  //   }
  //   else{
  //   Node *temp=head;
  //   head=head->next;
  // delete temp;

  //   head->prev=NULL;
  //   }

  // }

  // //delete at end

  // if(head!=NULL){
  //   //if only one Node exist
  // if(head->next==NULL){
  //   delete head;
  //   head=NULL;
  // }

  //   //More than one Node exist
  // else{
  //   Node *curr=head;
  //   //last Node lia jau
  //   while(curr->next){
  //     curr=curr->next;

  //   }
  //   curr->prev->next=NULL;
  //   delete curr;

  // }

  // }

  // delete at given pos
  int pos = 2;
  // delete at start
  if (pos == 1)
  {
    // delete at start
    if (head != NULL)
    {
      if (head->next == NULL)
      {
        delete head;
        head = NULL;
      }
      else
      {
        Node *temp = head;
        head = head->next;
        delete temp;

        head->prev = NULL;
      }
    }
  }

  else
  {

    Node *curr = head;
    while (--pos)
    {
      curr = curr->next;
    }

    // delete at end
    if (curr->next == NULL)
    {
      curr->prev->next = NULL;
      delete curr;
    }
    else
    {
      curr->prev->next = curr->next;
      curr->next->prev = curr->prev;
      delete curr;
    }
    // delete at mid
  }

  Node *trav = head;
  while (trav)
  {
    cout << trav->data << " ";
    trav = trav->next;
  }

  return 0;
}