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
    //printf("enter th data\n");
    //scanf(" %d ",n->data);
    //n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
    }
int sumofnodes(struct node*root){
    int rightsubtree, leftsubtree,sum=0;
    if(root!=NULL){
        if(root->data%2==0){
        leftsubtree=sumofnodes(root->left);
        rightsubtree=sumofnodes(root->right);
        sum=(root->data)+leftsubtree+rightsubtree;
        //return sum;
     }
    }

    return sum;
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

printf("The sum of even nodes= %d",sumofnodes(p));
return 0;

}