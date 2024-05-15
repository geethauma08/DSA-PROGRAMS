#include<stdio.h>
#include<stdlib.h>
void reverse();
void display();
struct node
{
int data;
struct node *next;
}*head,*new,*temp;
void main()
{
int choice,ch;
while(choice)
{
new=(struct node*)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&new->data);
new->next=NULL;
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
printf("%d",temp->data);
temp=temp->next;
}
while(ch!=4)
{
printf("enter the choice");
scanf("%d",&ch);
switch(ch)
{
case 2: display();
break;
case 1: reverse();
break;
case 3: printf("exit");
break;
default:printf("invalid");
}
}
}
void display()
{
if(head==NULL)
{
printf("list is empty\n");
}
else
{
printf("the elements are\n");
while(temp!=0)
{
printf("%d",temp->data);
temp=temp->next;
}
}
}
void reverse()
{
struct node *current,*prev,*next;
prev=0;
current=new=head;
while(new!=0)
{
new=next->next;
current->next=prev;
prev=current;
current=next;
}
head=prev;
temp=prev;
while(temp!=0)
{
printf("%d\n",temp->data);
temp=temp->next;
}
}

