#include<stdio.h>
#include<stdlib.h>
void beg();
void end();
void pos();
struct node
{
int data;
struct node*next;
}*new,*temp,*prev,*head;
void main()
{
int choice,c;
while(choice)
{
new=malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&new->data);
new->next=0;
if(head==NULL)
{
head=temp=new;
}
else
{
temp->next=new;
temp=new;
}
printf("do you want to continue");
scanf("%d",&choice);
}
temp=head;
while(temp!=NULL)
{
printf("%d\n",temp->data);
temp=temp->next;
}
while(c!=4)
{
printf("enter the choice\n");
scanf("%d",&c);
switch(c)
{
case 1: beg();
break;
case 2: end();
break;
case 3: pos();
break;
case 4: exit(0);
break;
default:printf("invalid ");
}
}
}
void beg()
{
int item;
new=malloc(sizeof(struct node));
printf("enter the item");
scanf("%d",&item);
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
new=malloc(sizeof(struct node));
printf("enter the item");
scanf("%d",&item);
new->data=item;
temp=head;
while(temp->next!=NULL)
{
prev=temp;
temp=temp->next;
}
prev->next=NULL;
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
new=malloc(sizeof(struct node));
printf("enter the item");
scanf("%d",&item);
new->data=item;
if(head==NULL)
{
new->next=NULL;
}
temp=head;
for(i=1;i<pos-1;i++)
{
temp=temp->next;
}
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



