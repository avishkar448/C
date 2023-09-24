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
   int sumof_nodes(struct node*root){
       int rightsubtree,leftsubtree,sum=0;
       if (root!=NULL){
           leftsubtree=sumof_nodes(root->left);
           rightsubtree=sumof_nodes(root->right);
           sum=(root->data)+leftsubtree+rightsubtree;
           return sum;
       }
   }
   void mirrorimage(struct node*root) //for swip
   {
       if(root!=NULL){
           struct node*temp;
           mirrorimage(root->left);
           mirrorimage(root->right);

           temp=root->left;
           root->left=root->right;
           root->right=temp;
       }
   }
//height of tree
int heightoftree(struct node*root){
    int max;
    if(root!=NULL){
        int leftsubtree=heightoftree(root->left);
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
//left to right in current level
void currentlevel(struct node*root,int level){
    if (root!=NULL){
        if(level==1){
            printf(" %d ",root->data);
        }
        else if(level>1){
            currentlevel(root->left,level-1);
            currentlevel(root->right,level-1);
        }
    }
}

 void inOrder(struct node*root){
     if(root!=NULL){
     inOrder(root->left);
     printf(" %d ",root->data);
     inOrder(root->right);
   }
 }
int main(){
    struct node*p=createnode(7);
    struct node*p1=createnode(4);
    struct node*p2=createnode(5);
    struct node*p3=createnode(8);
    struct node*p4=createnode(9);
    struct node*p5=createnode(2);

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    p2->left=p5;
    
    printf("It is a inorder traversal ");
    printf("\n");
    inOrder(p);
    printf("\n");
    printf("sum of the nodes=%d",sumof_nodes(p));

    printf("\n");
    printf("\n\nlevel order traversal of tree 1""before creating its mirror image is\n");
    int i;
    int height =heightoftree(p);

    for (i=0;i<=height;i++){
        currentlevel(p,i);
    }
    printf("\n\nlevel order traversal of tree 1""after creating its mirror image is\n");
    height=heightoftree(p);
    mirrorimage(p);

    for(i=1;i<=height;i++){
        currentlevel(p,i);
    }

    return 0;
}