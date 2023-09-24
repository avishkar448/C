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
}
//count the nodes 
static int count=0;
int countnodes(struct node*root){
    if(root!=NULL){
        countnodes(root->left);
        count++;
        countnodes(root->right);
    }
    return count;
}
//count the leaf node
static int count1=0;
int leafnodes(struct node*root){
    if(root!=NULL){
        leafnodes(root->left);
        if((root->left==NULL)&&(root->right==NULL)){
        count1++;
        }
        leafnodes(root->right);
    }
    return count1;
}

int main(){
struct node*p= createNode(5);
struct node*p1=createNode(3);
struct node*p2=createNode(6);
struct node*p3=createNode(1);
struct node*p4=createNode(4);
struct node*p5=createNode(8);
struct node*p6=createNode(9);
struct node*p7=createNode(12);

p->left=p1;
p->right=p2;
p1->left=p3;
p1->right=p4;
p2->left=p5;
p2->right=p6;
p3->left=p7;

printf("no of nodes in tree is=%d",countnodes(p));
printf("\n");
//count=0;
printf("no. of leaf node is= %d",leafnodes(p));
return 0;
}