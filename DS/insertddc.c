#include<stdio.h>
#include<stdlib.h>
void insertatbeg();
void insertatend();
void insertatpos();
struct node
{
int data;
struct node*next;
struct node*prev;
}*head,*temp,*new,*tail;
void main()
{
int choice,ch;
head=0;
while(choice)
{
int data;
new=malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&data);
new->next=0;
new->prev=0;
if(head==0)
{
head=temp=new;
}
else
{
temp->next=new;
temp=new;
}
//temp->next=head;
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
case 1: insertatbeg();
break;
case 2: insertatend();
break;
case 3: insertatpos();
break;
case 4: exit(0);
break;
default:printf("invalid");
}
}
}
void insertatbeg()
{
int data,item;
new=malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&data);
new->next=0;
new->prev=0;
head->prev=new;
new->next=head;
head=new;
while(tail!=0)
{
printf("%d",tail->data);
tail=tail->next;
}
}
void insertatend()
{
int data;
new=malloc(sizeof(struct node));
printf("enter the datda");
scanf("%d",&new->data);
new->next=0;
new->prev=0;
if(tail==0)
{
tail=new;
tail->next=new;
}
else
{
new->next=tail->next;
tail->next=new;
tail=new;
}
//tail=head;
while(tail!=0)
{
printf("%d",tail->data);
tail=tail->next;
}
}
void insertatpos()
{
int data,item,pos,i;
printf("enter the position");
scanf("%d",&pos);
new=malloc(sizeof(struct node));
printf("enter the item");
scanf("%d",&item);
new->data=item;
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
new->next=tail->next;
tail->next=new;
while(tail!=0)
{
printf("%d",tail->data);
tail=tail->next;
}
}
