#include<stdio.h>
#include<stdlib.h>
void beg();
void end();
void pos();
void display();
struct node
{
int data;
struct node *next;
}*head,*temp,*newnode;
void main()
{
int choice,ch;
while(choice)
{
newnode=malloc(sizeof(struct node));
printf("enter the data\n");
scanf("%d",&newnode->data);
newnode->next=NULL;
if(head==NULL)
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
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
while(ch!=5)
{
printf("enter the choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:beg();
break;
case 2:end();
break;
case 3:pos();
break;
case 4:display();
break;
case 5:exit(0);
break;
default:printf("invalid");
}
}
}
void beg()
{
int item;
newnode=malloc(sizeof(struct node));
printf("enter the item");
scanf("%d",&item);
newnode->next=head;
head=newnode;
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
}
void end()
{
int data;
newnode=malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&newnode->data);
newnode->next=NULL;
temp=head;
while(temp->next!=NULL)
{
temp=temp->next;
}
printf("%d",temp->data);
temp->next=newnode;
}
void pos()
{
int pos,i=1,count=0;
newnode=malloc(sizeof(struct node));
printf("entr the position");
scanf("%d",&pos);
if(pos>count)
{
printf("invalid position");
}
else
{
temp=head;
while(i<pos)
{
temp=temp->next;
i++;
}
printf("enter the data");
scanf("%d",&newnode->data);
newnode->next=temp->next;
temp->next=newnode;
}
}
void display()
{
if(head==NULL)
{
printf("empty");
}
else
{
printf("enter the elements are:");
for(temp=head;temp!=NULL;temp=temp->next)
{
printf("%d",temp->data);
}
}
}

