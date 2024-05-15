#include<stdio.h>
#include<stdlib.h>
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
printf("%d\n",ptr->data);
ptr=ptr->next;
}
}
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
}*new,*temp,*head;
int main()
{
int data,choice;
while(choice)
{
new=malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&new->data);
new->next=0;
if(head==0)
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
while(temp!=0)
{
printf("%d",temp->data);
temp=temp->next;
}
}
