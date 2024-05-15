#include<stdio.h>
#include<stdlib.h>
struct node
{
int key;
struct node*left;
struct node*right;
};
struct node*getnew(int val)
{
struct node*newnode=malloc(sizeof(struct node));
newnode->key=val;
newnode->left=newnode->right=NULL;
return newnode;
}
struct node*insert(struct node*root,int val)
{
if(root==NULL)
retur getnewnode(val);
if(root->key<val)
root->right=insert(root->right,val);
else if(root->key>val)
root->left=insert(root->left,val);
return root;
}
int getrightmin(struct node*root)
{
struct node*temp=root;
while(temp->left!=NULL){temp=temp->left;}
return temp->key;
}
struct node*removenode(struct node*root,int val)
{
if(root==NULL)
return NULL;
if(root->key<val)
root->right=removenode(root->right,val);
else if(root-key>val)
root->left=removenode(root->left,val);
else
{
if(root->left==NULL &&root->right==NULL)
{free(root);
return NULL;
}
else if(root->left==NULL)
{
struct node*temp=root->right;
free(root);
return temp;
}
else if(root->right==NULL)
{
struct node*temp=root->left;
free(root);
return temp;
}
else
{
int rightmin=getright(root->right);
root->key=rightmin;
root->right=removenode(root->right,rightmin);
}
}
return root;
}



