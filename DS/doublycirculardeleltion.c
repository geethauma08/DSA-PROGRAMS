#include<stdio.h>
#include<stdlib.h>
void deleteatbeg();
void deleteatend();
void deleteatpos();
struct node
{
int data;
struct node*next;
struct node*prev;
}*newnode,*temp,*tail,*head;
void main()
{
int choice,ch,data;
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
tail=newnode;
}
printf("do you want to continue");
scanf("%d",&choice);
}
temp=head;
while(ch!=4)
{
printf("enter the choice");
scanf("%d",&ch);
switch(ch)
{
case 1:deleteatbeg();
break;
case 2:deleteatend();
break;
case 3:deleteatpos();
break;
case 4:printf("exit");
break;
default:printf("invalid position");
}
}
}
void deleteatbeg()
{
struct node*prev;
int item;
temp=head;
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&item);
newnode->data=item;
if(head==0)
{
printf("invalid position");
}
else
{
temp=head;
head=head->next;
//head->prev=tail;
//tail->next=head;
free(temp);
}
temp=head;
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
}
void deleteatend()
{
struct node*prev;
int data,item;
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&item);
newnode->data=item;
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
void deleteatpos()
{
struct node*prev;
int pos,i,data,item;
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
