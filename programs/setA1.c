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
void preorder(struct node*root){
    if(root!=NULL){
        printf(" %d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node*root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf(" %d ",root->data);
    }
}
void inorder(struct node*root){
    if(root!=NULL){
        inorder(root->left);
        printf(" %d ",root->data);
        inorder(root->right);
    }
}
struct node*search (struct node*root,int key){
    if(root==NULL){
        return NULL;
    }
    if(key=root->data){
        return root;
    }
    else if (key<root->data){
        return search(root->left,key);
    }
    else{
        return search(root->right,key);
    }
}
int main(){
    struct node*p=createnode(8);
    struct node*p1=createnode(4);
    struct node*p2=createnode(6);
    struct node*p3=createnode(9);
    struct node*p4=createnode(2);
    struct node*p5=createnode(3);
    struct node*p6=createnode(5);

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    p2->left=p5;
    p2->right=p6;

    printf("The preorder travelsal is:-");
    preorder(p);
    printf("\n");
    printf("The postorder travelsal is:-");
    postorder(p);
    printf("\n");
    printf("The inorder travelsal:-");
    inorder(p);
    printf("\n");
    struct node*n=search(p,6);
    if(n=NULL){
        printf("no is found %d",n->data);
    }
    else{
        printf("no is not found");
    }

    return 0;

}