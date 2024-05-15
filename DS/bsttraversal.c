#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*right;
struct node*left;
};
struct node*createBST(struct node*,int);
void inorder(struct node*);
void preorder(struct node*);
void postorder(struct node*);
int main()
{
struct node*root=NULL;
int choice,item,n,i;
do
{
printf("binary search tree\n");
printf("1.create\n");
printf("2.traverse in inorder\n");
printf("3.traverse in preorder\n");
printf("4.traverse in postorer\n");
printf("5.exit\n");
printf("enter the choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
root=NULL;
printf("\nbst how many node");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("enter the data for node%d:",i);
scanf("%d",&item);
root=createBST(root,item);
}
printf("\n bst with %d  nodes is ready to use",n);;
break;
case 2:printf("bst traversal in inorder\n");
inorder(root);
break;
case 3:printf("bst traversal in preoder\n");
preorder(root);
break;
case 4:printf("bst traversal of postorder\n");
postorder(root);
break;
case 5:printf("exit");
break;
default:printf("invalid choice\n");
break;
}
}while(choice!=5);
return 0;
}
struct node*createBST(struct node*root,int item)
{
if(root==NULL)
{
root=(struct node*)malloc(sizeof(struct node));
root->left=root->right=NULL;
root->data=item;
return root;
}
else
{
if(item<root->data)
root->left=createBST(root->left,item);
else if(item>root->data)
root->right=createBST(root->right,item);
else
printf("duplicate item\n");
return(root);
}
}
void inorder(struct node*root)
{
if(root!=NULL)
{
inorder(root->left);
printf("%d\n",root->data);
inorder(root->right);
}
}
void preorder(struct node*root)
{
if(root!=NULL)
{
printf("%d\n",root->data);
preorder(root->left);
preorder(root->right);
}
}
void postorder(struct node*root)
{
if(root!=NULL)
{
postorder(root->left);
postorder(root->right);
printf("%d\n",root->data);
}}

