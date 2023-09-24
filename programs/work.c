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
void preOrder(struct node* root){
    if (root!=NULL){
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
void min(struct node*root){
    while(root!=NULL&&root->left!=NULL){
        root=root->left;
    }
    printf(" minimum value is %d\n",root->data);
}
void max(struct node*root){
    while(root!=NULL&&root->right!=NULL){
        root=root->right;
    }
    printf("maximum value is %d\n",root->data);
}
static int count=0;
int countnodes(struct node*root){
    if(root!=NULL){
        countnodes(root->left);
        count++;
        countnodes(root->right);
    }
    return count;
}
int count1=0;
int leafnodes(struct node*root){
    if(root!=NULL)
    {
        leafnodes(root->left);
        if((root->left==NULL)&&(root->right==NULL))
        {
            count1++;
        }
        leafnodes(root->right);
    }
    return count1;
}

void evenNode(struct node*root){
    if(root!=NULL){
        evenNode(root->left);
        if(root->data %2 ==0)
        printf(" %d ",root->data);
        evenNode(root->right);
    }
}
int main(){
struct node*p= createNode(5);
struct node*p1=createNode(3);
struct node*p2=createNode(6);
struct node*p3=createNode(1);
struct node*p4=createNode(4);

p->left=p1;
p->right=p2;
p1->left=p3;
p1->right=p4;
printf("preorder traversal\t");
preOrder(p);
printf("\n");
min(p);
printf("\n");
max(p);
printf("no of nodes in tree is=%d",countnodes(p));
printf("\n");
count=0;
printf("no. of leaf nodes in tree are \t%d",leafnodes(p));
count1= 0;
printf("\n");
printf("the even no. of tree is:");
evenNode(p);
return 0;
}