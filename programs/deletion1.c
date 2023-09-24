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
struct node*inorderPredecessor(struct node*root){
    root=root->left;
    while(root->right!=NULL)
    {
        root=root->right;
    }
    return root;
}
struct node*deleteNode(struct node*root,int value){
    struct node*ipre;
    if(root==NULL){
        return NULL;
    }
    if(root->left==NULL&&root->right==NULL){
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
void postOrder(struct node*root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d",root->data);
    }
}

int main(){
    struct node*p=createNode(6);
    struct node*p1=createNode(4);
    struct node*p2=createNode(5);
    struct node*p3=createNode(2);
    struct node*p4=createNode(7);
    struct node*p5=createNode(1);

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    p2->left=p5;
    
    deleteNode(p,5);
    printf("\n");
    postOrder(p);
    return 0;


}