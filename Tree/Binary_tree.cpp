#include<iostream>
using namespace std;
class Node{
public:
int data;
Node *left,*right;
Node(int value){
  data=value;
  left=right=NULL;

}

};
Node *BinaryTree(){
  int x;
 
 cin>>x;
 if(x==-1){
  return NULL;
 }
 Node *temp=new Node(x);
  cout<<"Enter the left child of"<<x<<":";
 temp->left=BinaryTree();
  cout<<"Enter the right child of"<<x<<":";
 temp->right=BinaryTree();
 return temp;
}


void preorder(Node *root){
  if(root==NULL){
    return;
  }
   cout<<root->data<<" ";
  preorder(root->left);
  preorder(root->right);
}
void Inorder(Node *root){
  if(root==NULL){
    return;
  }
  Inorder(root->left);
   cout<<root->data<<" ";
  Inorder(root->right);
}
void postorder(Node *root){
  if(root==NULL){
    return;
  }
  cout<<root->data<<" ";
  postorder(root->left);
  postorder(root->right);
}

int main(){
 

cout<<"Enter the root Node:";
Node *root;
root=BinaryTree();


preorder(root);
Inorder(root);
postorder(root);

  return 0;
}