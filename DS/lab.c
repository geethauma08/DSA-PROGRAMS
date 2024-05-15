#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*left;
struct node*right;
}*newnode,*temp,*root=0;
struct node*create(int data)
{
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=data;
newnode->left=newnode->right=NULL;
return newnode;
}
struct node*insert(struct node*root,int data)
{
if(root==NULL)
{
return create(data);
}
else if(data<root->data)
{
root->left=insert(root->left,data);
}
else if(data>root->data)
{
root->right=insert(root->right,data);
}
return root;
}
struct node*delete(struct node*root,int data)
{
if(root==NULL)
{
return root;
}
else if(data<root->data)
{
root->left=delete(root->left,data);
}
else if(data>root->data)
{
root->right=delete(root->right,data);
}
else {
if(root->left==NULL)
{
temp=root->right;
free(root);
return temp;
}
else if(root->right==NULL)
{
temp=root->right;
free(root);
return temp;
}
}
}
struct node*search(struct node*root,int data)
{
if(root==NULL)
{
return root;
}
else if(data<root->data)
{
return search(root->left,data);
}
else if(data>root->data)
{
return search(root->right,data);
}
}
void inorder(struct node*root)
{
if(root!=0)
{
inorder(root->left);
printf("%d",root->data);
inorder(root->right);
}
}
int main()
{
int i,n,choice,key;
while(1)
{
printf("1.insert\n.2.delete\n.3.search\n.4.inorder\n5.exit");
printf("enter the choice");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("enter the data to be inserted");
scanf("%d",&key);
root=insert(root,key);
break;
case 2:printf("enter the data to be deleted");
scanf("%d",&key);
root=delete(root,key);
break;
case 3:printf("enter the element to be search");
scanf("%d",&key);
if(search(root,key)!=0)
{
printf("the element is present:%d",key);
}
else
{
printf("is not present:%d",key);
}
break;
case 4:printf("inorder");
inorder(root);
break;
case 5:printf("exit");
break;
defualt:printf("invlid choice");
}
}
}



