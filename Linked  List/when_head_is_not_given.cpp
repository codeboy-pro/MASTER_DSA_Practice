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
    next = NULL;
  }
};
void  delete_node(Node *curr,int x){
  if(x==1){
    Node *temp=curr->next;
    curr->data=temp->data;
    curr->next=temp->next;
    delete temp;
    return;
  }
  curr=curr->next;
  x--;
  delete_node(curr, x);



}
int main()
{
  Node *Head, *Tail;
  Head = Tail = NULL;
  int arr[] = {1, 2, 3, 4, 5};
  for (int i = 0; i < 5; i++)
  {
    if (Head == NULL)
    {
      Head = new Node(arr[i]);
      Tail = Head;
    }
    else
    {
      Tail->next = new Node(arr[i]);
      Tail = Tail->next;
    }
  }
  Node *curr = Head;
  int x;
  cout << "Enter the position for deleting the Node:";
  cin >> x;
delete_node(curr,x);
 

  Node *temp = Head;
  while (temp)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }

  return 0;
}