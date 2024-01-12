#include<stdio.h>
#include<stdlib.h>

struct node{  // This is a block/structure of the node 
    int data;
    struct node *left;
    struct node *right;
};

struct node *create(int data){ //basic creation code for a node 
    struct node *n; 
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n; 
}

void post_order(struct node *root){
    if(root!=NULL){
        post_order(root->left);
        post_order(root->right);
        printf("%d",root->data);
    }
}

void main(){
    struct node *p = create(0); //it is the root 
    struct node *p1 = create(1); // contains 1 as data 
    struct node *p2 = create(2);
    struct node *p3 = create(3);
    struct node *p4 = create(4);
    

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    

    post_order(p);
}