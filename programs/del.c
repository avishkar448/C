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
}
void inOrder(struct node* root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d",root->data);
        inOrder(root->right);
    }
}
struct node*inorderPredecessor(struct node*root){
    root=root->left;
    while(root->right!=NULL){
        root=root->right;
    }
} 
struct node*deleteNode(struct node*root,int value){
    struct node*ipre;
    if(root==NULL){
        return NULL;
    }
    if(root->left==NULL&&root->left==NULL){
        free(root);
    }
    if(value<root->data){
        deleteNode(root->left,value);
    }
    else if(value>root->data){
        deleteNode(root->right,value);
    }
    else{
        ipre=inorderPredecessor(root);
        root->data=ipre->data;
        deleteNode(root->left,ipre->data);

    }
}

int main(){
struct node*p=createNode(5);
struct node*p1=createNode(2);
struct node*p2=createNode(7);
struct node*p3=createNode(1);
struct node*p4=createNode(4);
struct node*p5=createNode(10);

p->left=p1;
p->right=p2;
p1->left=p3;
p1->right=p4;
p2->left=p5;

inOrder(p);
printf("\n");
deleteNode(p,7);
return 0;
}

