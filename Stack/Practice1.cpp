#include<iostream>
using namespace std;
class stack{
int *arr;
int size;
int top;

public:
stack(int s){
  size=s;
  top=-1;
  arr=new int [s];

}
//push
void push(int value){
  if(top==size){
    cout<<"Stack Overflow"<<endl;

  }
  else{
    top++;
    arr[top]=value;
cout<<"Pushed "<<value<<" into the stack"<<endl;
  }
}
//pop
void pop(){
  if(top==-1){
    cout<<"Stack Underflow";

  }
  else{
    cout<<"The top element"<<arr[top]<<" is deleted successfully"<<endl;
    top--;
 

  }
}

//peek
int peek(){
    if(top==-1){
    cout<<"Stack is empty"<<endl;
return -1;
  }
  else{
return arr[top];
 

  }
}
//IsEmpty
bool IsEmpty(){
  if(top==-1){
    return 1;
  }
  else{
    return 0;
  }
}
//IsSize
int IsSize(){


  return top+1;

}
};

int main(){
stack s(5);

s.push(5);
s.push(7);
s.push(5);
s.push(7);
s.push(5);

s.pop();
s.pop();

cout<<s.peek()<<endl;
cout<<s.IsEmpty()<<endl;
cout<<s.IsSize()<<endl;


  return 0;
}