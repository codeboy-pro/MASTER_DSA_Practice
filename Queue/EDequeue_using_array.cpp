#include <iostream>
using namespace std;

class Dequeue
{
public:
  int rear, front;
  int size;
  int *arr;
  Dequeue(int n)
  {
    rear = front = -1;
    arr = new int[n];
    size = n;
  }
  bool isempty()
  {
    return front == -1;
  }
  bool isfull()
  {

    return (rear + 1) % size == front;
  }

  void push_front(int x)
  {
    if (isempty())
    {
      front = rear = 0;
      arr[0] = x;
      cout << "pushed " << x << " to the front" << endl;
      return;
    }
    else if (isfull())
    {
      cout << "dequeue is overflow" << endl;
      return;
    }
    else
    {
      front = (front - 1 + size) % size;
      arr[front] = x;
      cout << "pushed " << x << " to the front" << endl;
      return;
    }
  }
  void push_back(int x)
  {
    if (isempty())
    {
      front = rear = 0;
      arr[0] = x;
      cout << "pushed " << x << " to the back" << endl;
      return;
    }
    else if (isfull())
    {
      cout << "dequeue is overflow" << endl;
      return;
    }
    else
    {
      rear = (rear + 1) % size;
      arr[rear] = x;
      cout << "pushed " << x << " to the back" << endl;
      return;
    }
  }

  void pop_front()
  {
    if (isempty())
    {
      cout << "dequeue is underflow" << endl;
      return;
    }
    else
    {
      cout << "popped " << arr[front] << " from the front" << endl;
      if (front == rear)
      {
        front = rear = -1;
      }
      else
      {

        front = (front + 1) % size;
      }
    }
  }

  void pop_back()
  {
    if (isempty())
    {
      cout << "dequeue is underflow" << endl;
      return;
    }
    else
    {
      cout << "popped " << arr[rear] << " from the back" << endl;

      if (rear == front)
      {
        front = rear = -1;
      }
      else
      {

        rear = (rear - 1 + size) % size;
      }
    }
  }

  int start()
  {
    if (isempty())
    {
      return -1;
    }
    else
    {
      return arr[front];
    }
  }
  int end()
  {
    if (isempty())
    {
      return -1;
    }
    else
    {
      return arr[rear];
    }
  }
};

int main()
{
  Dequeue d1(5);
  d1.push_front(20);

  d1.push_back(30);

  d1.pop_front();
  d1.push_front(12);
  cout << d1.start() << endl;
  cout << d1.end() << endl;

  return 0;
}