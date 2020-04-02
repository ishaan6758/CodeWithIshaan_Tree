#include<bits/stdc++.h>
using namespace std;
struct Node  // Creation of a single element of tree
{
    int data;
    struct Node *left;
    struct Node *right;
}root;


void  Size(Node * root) {

            queue<Node*> q;
            int count=0;
            if (root==NULL)
            return ;

            q.push(root);
            count++;

            while(!q.empty())
            {
                Node *cur=q.front();
                cout<<cur->data<<" ";
                if (cur->left!=NULL)
                {
                q.push(cur->left);
                count++;
                }
                
                if (cur->right!=NULL)
                {
                q.push(cur->right);
                count++;
                }
                q.pop();
                
            }
            cout<<count;

    }