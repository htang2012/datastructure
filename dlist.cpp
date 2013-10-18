#include<iostream>

using namespace std;

struct Node{
     int data;
     Node *left;
     Node *right;
};

Node *gHeadptr = NULL;

void initDlist(int d)
{
     gHeadptr = new Node;
     gHeadptr -> left = NULL;
     gHeadptr -> right = NULL; 
     gHeadptr -> data = d;
}

void insertLeftDlist(int d)
{
     Node *newnode = new Node;
     newnode -> left = NULL;
     newnode -> right = gHeadptr;
     gHeadptr -> left = newnode; 
     newnode -> data = d;
}

void insertRightDlist(int d)
{
     Node *newnode = new Node;
     newnode -> left = gHeadptr;
     gHeadptr -> right = newnode;
     newnode -> right = NULL;
     newnode -> data  = d;
}

void transverlDlist(void)
{
     Node *cur = gHeadptr;
     while(cur -> left)
         cur = cur -> left;
     while(cur) {
        cout << cur->data <<',';
        cur = cur -> right;
     }
     
}

int main(void)
{
    initDlist(0);
    for ( int i = 10; i< 20; i++)
    {
        insertLeftDlist(i);
        insertRightDlist(i+1);
    }
    transverlDlist();
}






