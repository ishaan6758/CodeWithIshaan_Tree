#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }

    void inOrder(Node *root) {
        stack <Node* > s;

        while(1)
        {
            while(root!=NULL)
            {
                s.push(root);
                root=root->left;
            }
            if(s.empty())
            break;

            root=s.top();
            s.pop();
            cout<<root->data<<" ";
            root=root->right;
        }

    }
};