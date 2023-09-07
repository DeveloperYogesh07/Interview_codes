#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *right,*left;
}node;

node *newNode(int item){
     node *new_node = (node *)malloc(sizeof(node));
     new_node->data = item;
     new_node->left = NULL;
     new_node->right = NULL;

     return new_node;
}
void display(node* tnode)
{
   if(tnode==NULL)
   {
       return;
   }
   display(tnode->left);
   printf("%d ", tnode->data);
   display(tnode->right);
}

node *insert(node *nodee,int item){
    if(nodee == NULL){
        return newNode(item);
    }
    else if(item<nodee->data){
        nodee->left = insert(nodee->left,item);
    }
    else if(item > nodee->data){
        nodee->right = insert(nodee->right,item);
    }
    return nodee;
}

int main(){
    node *root = NULL;
    root = insert(root,1);
    insert(root,9);
    insert(root,3);
    insert(root,2);
    insert(root,4);
    display(root);

}
