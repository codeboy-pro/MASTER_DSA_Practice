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
  Node *temp1 = Head;
  int x;
  cout << "Enter the position for deleting the Node:";
  cin >> x;

 
  if (x == 1)
  {
    Node *temp = Head;
    Head = Head->next;
    delete temp;
  }
  else
  {
    Node *curr = Head;
    Node *prev = NULL;
    x--;
    while (x--)
    {
      prev = curr;
      curr = curr->next;
    }
    prev->next = curr->next;
    delete curr;
  }

  Node *temp = Head;
  while (temp)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }

  return 0;
}