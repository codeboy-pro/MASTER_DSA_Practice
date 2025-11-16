#include <iostream>
using namespace std;

class Stack
{

  int *arr;
  int size;
  int top;

public:
  bool flag;
  Stack(int s)
  {
    size = s;
    top = -1;
    arr = new int[size];
    flag = 1;
  }
  // push
  void push(int value)
  {
    if (top == size - 1)
    {
      cout << "Stack Overflow" << endl;
    }
    else
    {
      top++;
      arr[top] = value;
      cout << "pushed " << value << " into the stack" << endl;
      flag = 0;
    }
  }

  // pop
  void pop()
  {
    if (top == -1)
    {
      cout << "Stack is underflow \n";
    }
    else
    {

      cout << "The value " << arr[top] << " deleted successfully" << endl;
      top--;
      if (top == -1)
      {
        flag = 1;
      }
    }
  }
  // peek
  int peek()
  {

    if (top == -1)
    {
      cout << "stack is empty";
      return -1;
    }
    else
      return arr[top];
  }
  // IsEmpty
  bool is_empty()
  {
    return top == -1;
  }
  // Issize
  int is_size()
  {
    return top + 1;
  }
};
int main()
{
  Stack *s1 = new Stack(5);
  // s1->push(5);
  // s1->push(6);
  // s1->push(8);
  // s1->push(54);
  // s1->push(84);
  // s1->pop();

  // cout<<s1->peek()<<endl;
  // cout<<s1->is_empty()<<endl;
  // cout<<s1->is_size()<<endl;
  // s1->push(-1);

  int value = s1->peek();
  if (s1->flag == 0)
  {
    cout << value << endl;
  }

  return 0;
}