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
int compares(struct node*a,struct node*b){
    if(a==NULL && b==NULL){
        return 100;
    }
    if(a!=NULL && b!=NULL){
        return
        (
            a->data == b->data &&
            compares(a->left,b->left) &&
            compares(a->right,b->right)
        );
    }
}

int main(){
struct node*p= createNode(5);
struct node*p1=createNode(3);
struct node*p2=createNode(6);
struct node*p3=createNode(1);

p->left=p1;
p->right=p2;
p1->left=p3;

struct node*q= createNode(5);
struct node*q1=createNode(3);
struct node*q2=createNode(6);
struct node*q3=createNode(1);

q->left=q1;
q->right=q2;
q1->left=q3;

if(compares(p,q)){
    printf(" tree a&b are  equal ");
    return 1;
}
else{
    printf("tree a&b are not equal ");
    
}
//getchar();
return 0;

}