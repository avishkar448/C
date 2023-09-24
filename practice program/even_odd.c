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
void oddnodes(struct node*root){
    if(root!=NULL){
        oddnodes(root->left);
        if(root->data%2!=0);
        printf(" %d ",root->data);
        oddnodes(root->right);
    }
}
int evennodes(struct node*root){
    if(root!=NULL){
        evennodes(root->left);
        if(root->data %2==0)
        printf(" %d ",root->data);
        evennodes(root->right);
    
    //return count+evennodes(root->left)+evennodes(root->right);
    }
}
int main(){
struct node*p= createNode(5);
struct node*p1=createNode(7);
struct node*p2=createNode(6);
struct node*p3=createNode(1);
struct node*p4=createNode(3);
struct node*p5=createNode(9);
struct node*p6=createNode(11);

p->left=p1;
p->right=p2;
p1->left=p3;
p1->right=p4;
p2->left=p5;
p2->right=p6;

printf("the odd nodes in tree");
oddnodes(p);
printf("\n");
printf("the even nodes in tree ");
evennodes(p);
return 0;

}