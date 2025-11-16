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
      Tail=Head;
    }
    else
    {
    //   while (Tail->next != NULL)
    //   {
    //     Tail = Tail->next;
    //   }
    //   Node *temp = new Node(arr[i]);
    //   Tail->next = temp;
    // }
    Tail->next=new Node(arr[i]);
    Tail=Tail->next;
    }
  }

Node *temp=Head;

while(temp){
  cout<<temp->data<<" ";
  temp=temp->next;

};

  return 0;
}