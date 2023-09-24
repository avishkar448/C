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
void inorder(struct node*root){
    if(root!=NULL){
        inorder(root->left);
        printf(" %d ",root->data);
        inorder(root->right);
    }
}
void postorder(struct node*root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf(" %d ",root->data);
    }
}
int main(){
    int ch;
    struct node*p= createnode(8);
    struct node*p1= createnode(4);
    struct node*p2= createnode(6);
    struct node*p3= createnode(6);
    struct node*p4= createnode(2);

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;

   while(1){
   printf("\n");
   puts("----------travelsal menu------------");
   puts("1.preorder");
   puts("2.inorder");
   puts("3.postorder");
   puts("--------------------------------------");
   printf("\n");
   printf("enter your choice");
   scanf(" %d ",&ch);
   switch(ch){
       case 1:
              //printf("\n preorder travelsal:-");
         preorder(p);
         break;

       case 2:
               //printf("\n inorder travelsal:-");
        inorder(p);
        break;

       case 3:
               //printf("\n postorder travelsal:-");
        postorder(p);
        break;
     
     default:
              printf("invalide choice");
       
   }

  }
 preorder(p);
   return 0;

}