#include<bits/stdc++.h>
using namespace std;
struct Node  // Creation of a single element of tree
{
    int data;
    struct Node *left;
    struct Node *right;
}root;


//level order traversal of tree usign queue
void levelOrder(Node * root) {

            queue<Node*> q;
            if (root==NULL)
            return ;

            q.push(root);

            while(!q.empty())
            {
                Node *cur=q.front();
                cout<<cur->data<<" ";
                if (cur->left!=NULL)
                q.push(cur->left);
                if (cur->right!=NULL)
                q.push(cur->right);

                q.pop();
                
            }

    }