#include<stdio.h>
#include<stdlib.h>
void beg();
void end();
void pos();
struct node
{
int data;
struct node*next;
}*head,*temp,*newnode,*ptr;
void main()
{
int choice,ch;
while(choice)
{
newnode=malloc(sizeof(struct node));
printf("enter the data");
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
while(ch!=4)
{
printf("enter the choice");
scanf("%d",&ch);
switch(ch)
{
case 1:beg();
break;
case 2:end();
break;
case 3:pos();
break;
case 4:printf("exit");
break;
default:printf("invalid choice");
}
}
}
void beg()
{
int item;
newnode=malloc(sizeof(struct node));
printf("enter the item\n");
scanf("%d",&item);
newnode->data=item;
if(head==NULL)
{
printf("empty");
}
else
{
temp=head;
head=head->next;
free(temp);
}
temp=head;
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
}
void end()
{
int item;
newnode=malloc(sizeof(struct node));
printf("enter the item");
scanf("%d",&item);
newnode->data=item;
temp=head;
while(temp->next!=NULL)
{
ptr=temp;
temp=temp->next;
}
ptr->next=NULL;
free(temp);
temp=head;
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
}
void pos()
{
int item,pos,i;
printf("enter the position");
scanf("%d",&pos);
newnode=malloc(sizeof(struct node));
printf("enter the item");
scanf("%d",&item);
newnode->data=item;
if(head==NULL)
{
newnode->next=NULL;
head=newnode;
}
temp=head;
for(i=1;i<pos-1;i++)
{
temp=temp->next;
}
ptr=temp->next;
temp->next=ptr->next;
free(ptr);
temp=head;
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
}

