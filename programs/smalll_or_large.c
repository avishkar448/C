#include<stdio.h>
#include<malloc.h>
struct node{
    int data;
    struct node*left;
    struct node*right;
};
struct node*createnode(int data){
    struct node*n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
void inOrder(struct node*root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d \t",root->data);
        inOrder(root->right);
    }
}
void smallest(struct node*root){
    while(root!=NULL&&root->left!=NULL){
        root=root->left;
    }
    printf("\t smallest value is %d\n",root->data);
}
void largest(struct node*root){
    while(root!=NULL&&root->right!=NULL){
        root=root->right;
    }
    printf("\t largest value is %d \n",root->data);
}
int main(){
    struct node*p=createnode(4);
    struct node*p1=createnode(5);
    struct node*p2=createnode(6);
    struct node*p3=createnode(7);
    struct node*p4=createnode(2);
    struct node*p5=createnode(1);

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    p2->left=p5;
    printf("\n inorder traversal \n");
    inOrder(p);
    smallest(p);
    largest(p);
    return 0;
}