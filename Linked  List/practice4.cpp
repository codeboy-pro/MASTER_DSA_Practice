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
Node *create_Linked_List(int *arr, int index, int size)
{
  if (index == size)
  {
    return NULL;
  }
  Node *temp = new Node(arr[index]);
  temp->next = create_Linked_List(arr, index + 1, size);
  return temp;
}
int main()
{
  Node *Head;
  int arr[] = {1, 2, 3, 4, 5};
  int size = 5;
  Head = create_Linked_List(arr, 0, size);

  // delete at first position

  if (Head != NULL)
  {
    Node *temp = Head;
    Head = Head->next;
    delete temp;
  }

  return 0;
}