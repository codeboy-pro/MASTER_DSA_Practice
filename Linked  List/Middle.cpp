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

  // Node A1(4);

  Node *Head, *Tail;
  // Head =new Node(4);
  Tail = Head = NULL;
  int arr[] = {2, 4, 6, 10};

  // cout<<Head->data<<endl;
  // cout<<Head->next<<endl;

  // insert the node at start
  for (int i = 0; i < 5; i++)
  {
    // Linklist doesnot exist

    if (Head == NULL)
    {
      Head = new Node(arr[i]);
      Tail = Head;
    }
    // Lnked List exist karti

    else
    {
      Tail->next = new Node(arr[i]);
      Tail = Tail->next;
    }
  }

  int x = 3; // position
  int value = 30;

  Node *temp = Head;
  x--;
  while (x--)
  {
    temp = temp->next;
  }
  Node *temp2 = new Node(value);
  temp2->next = temp->next;
  temp->next = temp2;

  // print the value

  Node *temp12 = Head;

  while (temp12)
  {
    cout << temp12->data << " ";
    temp12 = temp12->next;
  };

  return 0;
}