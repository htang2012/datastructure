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

     if ( d <= node -> data ) node ->left = insert( node->left, d);
     else  node -> right = insert( node->right, d);
}

void printTree( Node* node) { 
  if (node == NULL) return;
  printTree(node->left); 
  cout << node->data <<"L:";
  printTree(node->right); 
  cout <<"R:"<< node->data;
} 



int main(void)
{
    Node *root = insert(NULL, 5);
    Node *leaf = root;
    
    for ( int i = 1; i< 10; i++) {
      leaf = insert(leaf,i);
    }
    printTree(root);
}

