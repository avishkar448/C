#include<stdio.h>
#include<malloc.h>
struct node{
    int data;
    struct node*left;
    struct node*right;
};
struct node*createNode(int data){
    struct node*n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
};
int isBST(struct node * root){
    static struct node*prev =NULL;
    if (root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev!=NULL&&root->data<=prev->data){
            return 0;
        }
        prev =root;
        return isBST(root->right);
    }
    else{
        return 1;
    }
}
int main(){
    struct node*p=createNode(10);
    struct node*p1=createNode(9);
    struct node*p2=createNode(8);
    struct node*p3=createNode(1);
    struct node*p4=createNode(2);
    struct node*p5=createNode(3);
    struct node*p6=createNode(4);
    struct node*p7=createNode(7);
    struct node*p8=createNode(6);
    struct node*p9=createNode(5);

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    p2->left=p5;
    p2->right=p6;
    p3->left=p7;
    p3->right=p8;
    p6->right=p9;

    if(isBST(p)){
        printf("It is a BST");
    }
    else{
        printf("it is not a BST");
    }
    return 0;
}  