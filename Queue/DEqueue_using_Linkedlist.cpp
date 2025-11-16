#include<iostream>
using namespace std;
class Node{
public:
int data;
Node *next,*prev;

Node(int value){
  data=value;
  next=prev=NULL;

}

};
class Dequeue{
public:
Node *rear,*front;
Dequeue(){
  rear=NULL;
  front=NULL;
}

//push front
void push_front(int x){
  if(front==NULL){
front=rear=new Node(x);
cout<<"Pushed "<<x<<"in front of dequeue\n";
return  ;
  }
  else{
    Node *temp=new Node(x);
    temp->next=front;
    front->prev=temp;
    front=temp;
    cout<<"Pushed "<<x<<"in front of dequeue\n";
    return ;
  }
}


void push_back(int x){
    if(front==NULL){
front=rear=new Node(x);
cout<<"Pushed "<<x<<"in back of dequeue\n";
return  ;
  }
  else{
    Node *temp=new Node(x);
    rear->next=temp;
    temp->prev=rear;
    rear=temp;
    cout<<"Pushed "<<x<<"in back of dequeue\n";
    return ;

  }
}




void pop_front(){
    if(front==NULL){
      cout<<"dequeue underflow"<<endl;
return ;
  }
  else{
Node *temp=front;
front=front->next;
cout<<"Popped "<<temp->data<<"in back of dequeue\n";
delete temp;
if(front){
  front->prev=NULL;
}
else{
  rear=NULL;
}
  }
}


void pop_back(){
      if(front==NULL){
              cout<<"dequeue underflow"<<endl;
return ;
  }
else{
  Node *temp=rear;
  rear=rear->prev;
  cout<<"Popped "<<temp->data<<"in back of dequeue\n";
  delete temp;
if(rear){
  rear->next=NULL;

}
else{
  front=NULL;

}
}


}

int start(){
      if(front==NULL){
return -1;
  }
  else{
    return front->data;
  }
}
int end(){
      if(front==NULL){
return -1;
  }
  else{
    return rear->data;
  }
}



};


int main(){
Dequeue d1;
d1.push_front(1);
d1.push_back(2);
d1.pop_back();
d1.pop_back();
d1.pop_back();

cout<<d1.start();

d1.push_front(90);
d1.push_front(91);
d1.push_front(92);
d1.push_front(93);


cout<<d1.start()<<endl;
cout<<d1.end();


  return 0;

}