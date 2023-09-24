#include<stdio.h>
#include<malloc.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node*createNode(int data){
    struct node*n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
};
void inOrder(struct node* root){
    if(root!=NULL){
         inOrder(root->left);
         printf("%d ",root->data);
        inOrder(root->right);
    }
   
}
void mirrorimage(struct node*root){
    if(root!=NULL){
        struct node*temp;
        mirrorimage(root->left);
        mirrorimage(root->right);

        temp=root->left;
        root->left=root->right;
        root->right=temp;
    }
}

int heightoftree(struct node*root){
    int max;
    if(root!=NULL){
     int leftsubtree= heightoftree(root->left);
     int rightsubtree=heightoftree(root->right);

     if(leftsubtree>rightsubtree){
         max=leftsubtree+1;
         return max;
     }
     else{
         max=rightsubtree+1;
         return max;
     }
    }
}
void currentlevel(struct node*root,int level){
    if(root!=NULL){
        if(level==1){
            printf(" %d ",root->data);
        }
        else if (level>1){
            currentlevel(root->left,level-1);
            currentlevel(root->right,level-1);
        }
    }
}

int main(){
    struct node*p=createNode(10);
    struct node*p1=createNode(9);
    struct node*p2=createNode(8);
    struct node*p3=createNode(1);
    struct node*p4=createNode(2);
    struct node*p5=createNode(3);
    struct node*p6=createNode(4);
    struct node*p7=createNode(7);
    struct node*p8=createNode(6);
    struct node*p9=createNode(5);

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    p2->left=p5;
    p2->right=p6;
    p3->left=p7;
    p3->right=p8;
    p6->right=p9;
    
    printf("The inorder travelsal:- \n" );
    inOrder(p);
    printf("\n");
    printf("\n\nlevel order traversal of tree 1""before creating its mirror image is\n");
    int i;
    int height=heightoftree(p);

    for(i=0;i<=height;i++){
        currentlevel(p,i);

    }
    printf("\n\nlevel order traversal of tree 1""after creating its mirror image is\n");
    height=heightoftree(p);
    mirrorimage(p);

    for(i=0;i<=height;i++){
        currentlevel(p,i);
    }
    return 0;

}