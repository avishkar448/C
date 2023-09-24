#include<stdio.h>
#include<malloc.h>
struct node{
    int data;
    struct node*left;
    struct node*right;
};
struct node*createNode(int data){
    struct node*n;
    n= (struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
void inOrder(struct node*root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d",root->data);
        inOrder(root->right);
    }
}
struct node*inOrderpredecessor(struct node*root){
    root=root->left;
    while(root->right!=NULL){
        root=root->right;
    }
    return root;
}
struct node*deletionNode(struct node*root,int value){
    struct node*ipre;
    if(root==NULL){
        return NULL;
    }
    if(root->left==NULL&&root->right==NULL){
        free(root);
    }
    if(value<root->data){
        deletionNode(root->left,value);
    }
    else if(value>root->data){
        deletionNode(root->right,value);
    }
    else{
        ipre=inOrderpredecessor(root);
        root->data=ipre->data;
        deletionNode(root->left,ipre->data);            
    }
}
int main(){
    struct node*p=createNode(4);
    struct node*p1=createNode(3);
    struct node*p2=createNode(5);
    struct node*p3=createNode(6);
    struct node*p4=createNode(8);
    struct node*p5=createNode(2);

   p->left=p1;
   p->right=p2;
   p1->left=p3;
   p1->right=p4;
   p2->left=p5;
  
   inOrder(p);
   printf("\n");
   deletionNode(p,3);
   inOrder(p);
   return 0;



}
