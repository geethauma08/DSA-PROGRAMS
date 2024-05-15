#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*left;
struct node*right;
}*newnode;
struct node*createnode()
{
int d;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->left=NULL;
newnode->right=NULL;
//printf("enter the data");
scanf("%d",&d);
if(d==-1)
return NULL;
newnode->data=d;
printf("enter the left child:%d",d);
newnode->left=createnode();
printf("enter the right child:%d",d);
newnode->right=createnode();
return newnode;
}
void inorder(struct node*root)
{
if(root==NULL)
return;
inorder(root->left);
printf("%d",root->data);
inorder(root->right);
}
void preorder(struct node*root)
{
if(root==NULL)
return;
printf("%d",root->data);
preorder(root->left);
preorder(root->right);
}
void postorder(struct node*root)
{
if(root==NULL)
return;
postorder(root->left);
postorder(root->right);
printf("%d",root->data);
}
int main()
{
struct node*root=NULL;
root=createnode();
if(root==NULL)
return 0;
printf("inorder  traversal\t");
inorder(root);
printf("\n");
printf("preorder traversal\t");
preorder(root);
printf("\n");
printf("postorder traversal\t");
postorder(root);
printf("\n");
return 0;
}
