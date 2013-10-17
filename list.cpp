#include<iostream>

using namespace std;

struct Node{
     int data;
     Node *next;
};

Node *gHeadptr = NULL;

void addNodetoList(int d)
{
     Node *newnode = new Node;
     newnode-> data = d;
     newnode-> next = NULL;

     if (gHeadptr == NULL) {
         gHeadptr = newnode;
         return;   
     } 
     Node *cur = gHeadptr; 
     while( cur -> next != NULL) {
          cur = cur -> next;
     }
     cur-> next = newnode;
     return; 
}

void iterateList(void)
{
     Node *cur = gHeadptr;
     cout << "Start list:[ ";
     while(cur) {
         cout << cur -> data << ' '; 
         cur = cur -> next;
     }
     cout << "]" << endl; 
}

int lenList(void)
{
    int count = 0;
    Node *cur = gHeadptr;
    while(cur){
       cur = cur -> next;
       count ++;
    }
    return count; 
}

bool deleteNodefromList(int d)
{
      Node *cur = gHeadptr;
      while(cur->next) {
          if ( cur-> next -> data == d ) {
              Node *delNode = cur -> next;
              cur-> next = delNode -> next;
              delete delNode;
              return true;
           }
          cur = cur->next;
      }
      return false;
}

Node * searchList(int d)
{
    Node *cur = gHeadptr;
    while(cur){
        if (cur -> data == d) {
           return cur;
        }
        cur = cur -> next; 
    }
    return NULL;    
}

int main(void)
{
     for ( int i = 100; i< 120; i ++ )
     addNodetoList(i);
     cout << "length is:" << lenList() << endl;
     iterateList();
     deleteNodefromList(110);
     deleteNodefromList(108);
     iterateList();
     cout << searchList(150) << endl;
     cout << " End test " << endl;
}





