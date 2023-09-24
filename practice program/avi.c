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
int main(){
    struct node*p=createnode(9);
    struct node*p1=createnode(9);
    struct node*p2=createnode(9);
    struct node*p3=createnode(9);
    struct node*p4=createnode(9);
    struct node*p5=createnode(9);

         p->left=p1;
         p->right=p2;
         p1->left=p3;
         p1->right=p4;
         p2->left=p5;
         
         return 0;

}