#include<stdio.h>
#include<stdlib.h>
void insertatbeg();
void insertatend();
void insertatpos();
void insertafterpos();
void display();
struct node
{
int data;
struct node*next;
struct node*prev;
}*head,*tail,*temp,*newnode;
int main()
{
int choice,ch;
head=0;
while(choice)
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&newnode->data);
newnode->next=0;
newnode->prev=0;
if(head==0)
{
head=tail=newnode;
}
else
{
tail->next=newnode;
tail=newnode;
}
printf("do you want to continue");
scanf("%d",&choice);
}
temp=head;
while(ch!=6)
{
printf("enter the choice");
scanf("%d",&ch);
switch(ch)
{
case 1: insertatbeg();
break;
case 2:insertatend();
break;
case 3:insertatpos();
break;
case 4:insertafterpos();
break;
case 5:display();
break;
case 6:exit(0);
break;
default:printf("invalid");
}
}
}
void insertatbeg()
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&newnode->data);
newnode->prev=0;
newnode->next=0;
head->prev=newnode;
newnode->next=head;
head=newnode;
}
void insertatend()
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&newnode->data);
newnode->prev=0;
newnode->next=0;
tail->next=newnode;
newnode->prev=tail;
tail=newnode;
}
void insertatpos()
{
int pos,i=1,item;
printf("enter the position");
scanf("%d",&pos);
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the item");
scanf("%d",&item);
newnode->data=item;
if(head==NULL)
{
printf("empty");
}
temp=head;
for(i=1;i<pos-1;i++)
{
temp=temp->next;
}
i++;
newnode->prev=temp;
newnode->next=temp->next;
temp->next=newnode;
newnode->next->prev=newnode;
}
void insertafterpos()
{
int pos,i,item;
printf("enter the position");
scanf("%d",&pos);
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the item");
scanf("%d",&item);
newnode->data=item;
if(head==NULL)
{
printf("empty");
}
temp=head;
for(i=1;i<pos;i++)
{
temp=temp->next;
}
i++;
newnode->prev=temp;
newnode->next=temp->next;
temp->next=newnode;
newnode->next->prev=newnode;
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

