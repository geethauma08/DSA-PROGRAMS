#include<stdio.h>
#include<stdlib.h>
void deletebeg();
void deleteend();
void deletepos();
void display();
struct node
{
int data;
struct node*prev;
struct node*next;
}*newnode,*temp,*tail,*head;
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
head=tail=newnode;
}
else
{
tail->next=newnode;
newnode->prev=tail;
tail=newnode;
}
printf("do you want to continue");
scanf("%d",&choice);
}
temp=head;
while(ch!=5)
{
printf("enter the choice");
scanf("%d",&ch);
switch(ch)
{
case 1:deletebeg();
break;
case 2:deleteend();
break;
case 3:deletepos();
break;
case 4:display();
break;
case 5:exit(0);
break;
default:printf("invalid");
}
}
}
void deletebeg()
{
int data;
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&newnode->data);
if(head==NULL)
{
printf("list is empty");
}
else
{
temp=head;
head=head->next;
head->prev=NULL;
free(temp);
}
temp=head;
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
}
void deleteend()
{
struct node*prev;
int data,item;
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&newnode->data);
if(tail==NULL)
{
printf("list is empty");
}
else
{
temp=tail;
tail->prev->next=0;
}
tail=tail->prev;
free(temp);
temp=head;
while(temp!=0)
{
printf("%d",temp->data);
temp=temp->next;
}
}
void deletepos()
{
struct node*prev;
int data,pos,i,item;
printf("enter the position");
scanf("%d",&pos);
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the item");
scanf("%d",&item);
newnode->data=item;
if(head==NULL)
{
newnode->next=NULL;
}
temp=head;
for(i=1;i<pos-1;i++)
{
temp=temp->next;
}
i++;
prev=temp->next;
temp->next=prev->next;
free(prev);
temp=head;
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
}
void display()
{
if(head==NULL)
{
printf("list is empty");
}
else
{
printf("the elements in list are");
for(temp=head;temp!=NULL;temp=temp->next)
{
printf("%d",temp->data);
}
}
}

