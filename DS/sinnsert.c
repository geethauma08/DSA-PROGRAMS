#include<stdio.h>
#include<stdlib.h>
void beg();
void end();
void pos();
struct node
{
int data;
struct node *next;
}*head,*ptr,*new,*ptr1;
void main()
{
int choice,ch;
while(choice)
{
new=malloc(sizeof(struct node));
printf("enter the data\n");
scanf("%d",&new->data);
new->next=NULL;
if(head==NULL)
{
head=ptr=new;
}
else
{
ptr->next=new;
ptr=new;
}
printf("do you want to continue\n");
scanf("%d",&choice);
}
ptr=head;
while(ptr!=NULL)
{
printf("%d",ptr->data);
ptr=ptr->next;
}
while(ch!=4)
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
case 4:printf("exit");
break;
default:printf("invalid");
}
}
}
void beg()
{
int item;
new=malloc(sizeof(struct node));
printf("enter the item\n");
scanf("%d",&item);
new->data=item;
if(head==NULL)
{
new->next=NULL;
head=new;
}
else
{
new->next=head;
head=new;
}
ptr=head;
while(ptr!=NULL)
{
printf("%d",ptr->data);
ptr=ptr->next;
}
}
void end()
{
int item;
new=malloc(sizeof(struct node));
printf("enter the item\n");
scanf("%d",&item);
new->data=item;
ptr=head;
while(ptr->next!=NULL)
{
ptr=ptr->next;
}
new->next=NULL;
ptr->next=new;
ptr=head;
while(ptr!=NULL)
{
printf("%d",ptr->data);
ptr=ptr->next;
}
}
void pos()
{
int item,pos,i;
printf("enter the position\n");
scanf("%d",&pos);
new=malloc(sizeof(struct node));
printf("enter the item\n");
scanf("%d",&item);
new->data=item;
if(head==NULL)
{
new->next=NULL;
head=new;
}
ptr=head;
for(i=1;i<pos-1;i++)
{
ptr=ptr->next;
}
new->next=ptr->next;
ptr->next=new;
ptr=head;
while(ptr!=NULL)
{
printf("%d",ptr->data);
ptr=ptr->next;
}
}
