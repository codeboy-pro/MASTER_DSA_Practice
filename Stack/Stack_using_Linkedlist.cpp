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
class stack
{
  Node *top;
  int size;

public:
  stack()
  {
    top = NULL;
    size = 0;
  }
  void push(int value)
  {
    Node *temp = new Node(value);
    if (temp == NULL)
    {
      cout << "stack overflow\n";
      return;
    }
    else
    {
cout<<"pushed "<<value <<" into the stack\n";

      temp->next = top;
      top = temp;

      size++;
    }
  }
  void pop()
  {
    if (top == NULL)
    {
      cout << "stack Underflow\n";
    }
    else
    {
      Node *temp = top;
      cout<<"pooped "<<top->data<<" from the stack \n";

      top = top->next;
      delete temp;
      size--;

    }
  }

int peek(){
  if(top==NULL){
    cout<<"Stack is empty";
    return -1;

  }
  else{
    return top->data;

  }
}


bool IsEmpty(){
  return top==NULL;

}
int IsSize(){
  return size;

}

};
int main()
{
stack s;
s.push(7);
s.push(45);
s.push(23);
s.push(30);
s.pop();
cout<<s.peek();
  return 0;
}