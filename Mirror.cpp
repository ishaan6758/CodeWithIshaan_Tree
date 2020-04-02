#include<bits/stdc++.h>
using namespace std;
struct Node  // Creation of a single element of tree
{
    int data;
    struct Node *left;
    struct Node *right;
}root;


void mirror(Node* root)
{
    if (root==NULL)
    return ;

    mirror(root->left);
    mirror(root->right);

    Node* temp=root->left;
    root->left=root->right;
    root->right=temp;
}