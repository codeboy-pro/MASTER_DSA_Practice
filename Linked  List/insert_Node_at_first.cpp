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

  Node *Head;
  // Head =new Node(4);
  Head = NULL;
  int arr[] = {2, 4, 6, 8, 10};

  // cout<<Head->data<<endl;
  // cout<<Head->next<<endl;

  // insert the node at start
  for (int i = 0; i < 5; i++)
  {
    // Linklist doesnot exist

    if (Head == NULL)
    {
      Head = new Node(arr[i]);
    }
    // Lnked List exist karti

    else
    {
      Node *temp;
      temp = new Node(arr[i]);
      temp->next = Head;
      Head = temp;
    }
  }

  // print the value

  Node *temp = Head;

  while (temp)
  {
    cout << temp->data << " ";
    temp = temp->next;
  };

  return 0;
}