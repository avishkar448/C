#include<stdio.h>
#include<malloc.h>
struct node {
    int data;
    struct node* left;
    struct node* right;
};
struct node* createNode(int data){
    struct node* n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
};
void postOrder(struct node* root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ",root->data);
    }
}
int main(){
    struct node*p=createNode(7);
    struct node*p1=createNode(5);
    struct node*p2=createNode(4);
    struct node*p3=createNode(2);
    struct node*p4=createNode(1);
    struct node*p5=createNode(9);
    struct node*p6=createNode(8);

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    p2->left=p5;
    p2->right=p6;

    postOrder(p);
    return 0;

}