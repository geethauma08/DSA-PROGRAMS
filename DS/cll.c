#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
}*newnode,*temp,*head;
void main()
{
int data,choice,ch;
while(choice)
{
newnode=malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&newnode->data);
newnode->next=0;
if(head==0)
{
head=temp=newnode;
}
else
{
temp->next=newnode;
temp=newnode;
}
printf("do you want to continue\n");
scanf("%d",&choice);
}
temp=head;
while(temp!=0)
{
printf("%d\n",temp->data);
temp=temp->next;
}
}
