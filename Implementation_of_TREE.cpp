#include <bits/stdc++.h> 
using namespace std; 
  

class Node
{
    public :
    int key;
    Node* left;
    Node* right;

    Node(int key1)
    {
        this->key=key1;
        this->left=nullptr;
        this->right=nullptr;
    }

};

int main()
{
    Node * root=nullptr;

    root =new Node(5);
    root->left=new Node(10);
    root->right=new Node(20);
    root->left->left=new Node(30);
    root->left->right=new Node(40);
    root->right->left=new Node(50);
    root->right->right=new Node(60);
}