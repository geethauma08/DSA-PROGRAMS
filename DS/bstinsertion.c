#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*left,*right;
};
struct node*newnode(int item)
{
struct node*new=(struct node*)malloc(sizeof(struct node));
new->data=item;
new->left=new->right=NULL;
return new;
}
struct node*insert(struct node*node,int key)
{
if(node==NULL)
return newnode(key);
if(key<node->data)
node->left=insert(node->left,key);
else if(key>node->data)
node->right=insert(node->right,key);
return node;
}
struct node*search(struct node*root,int key)
{
if(root==NULL || root->data==key)
return root;
if(root->data<key)
return search(root->right,key);
else
return search(root->left,key);
}
int main()
{
struct node*root=NULL;
root=insert(root,10);
insert(root,20);
insert(root,30);
insert(root,40);
insert(root,50);
int key;
printf("enter the key");
scanf("%d",&key);
if(search(root,key)==NULL)
printf("%d is not found",key);
else
printf("%d is found",key);
return 0;
}

