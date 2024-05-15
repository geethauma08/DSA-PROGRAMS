#include<stdio.h>
#include<stdlib.h>
void delete();
void display();
struct node 
{
int data;
struct node*next;
struct node*prev;
}*head,*newnode,*temp,*prevnode;
void main()
{
int choice,ch;
while(choice)
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&newnode->data);
newnode->prev=0;
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
printf("do you wnat to continu");
scanf("%d",&choice);
}
temp=head;
while(temp!=0)
{
printf("%d",temp->data);
temp=temp->next;
}
while(ch!=2)
{
printf("enter the choice");
scanf("%d",&ch);
switch(ch)
{
case 1:delete();
break;
case 2:display();
break;
case 3:exit(0);
break;
default:printf("invalid");
}
}
}
void delete()
{
int data;
temp=head;
while(temp->next!=0)
{
prevnode=temp;
temp=temp->next;
}
if(temp==head){
head=0;
}
else
{
prevnode->next=0;
}
free(temp);
}

void display()
{
if(head==NULL)
{
printf("list is empty");
}
else
{
printf("enter the elements are");
for(temp=head;temp!=NULL;temp=temp->next)
{
printf("%d\n",temp->data);
}
}
}
