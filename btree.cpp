#include<iostream>

using namespace std;

struct Node{
    int data;
    Node *right, *left;
};

Node * insert(Node *node, int d)
{
     if (node == NULL) {
        node = new Node;
        node -> data = d;
        node -> left = node -> right = NULL;
        return node;
     }

     if ( d <= node -> data ) node ->left = insert( node->left, data);
     else  node -> right = insert( node->right, data);
     return (node);
     
     
}
