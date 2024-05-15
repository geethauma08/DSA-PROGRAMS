#include<stdio.h>
#include<stdlib.h>
void enque();
void deque();
void display();
struct node
{
int data;
struct node*next;
}*front=NULL,*rear=NULL,*new,*temp;
int main()
{
int choice,item;
printf("enter the choice:1.enqueue\n,2.dequeu\n,3.display\n");
scanf("%d",&choice);
switch(choice)
{
case 1: enque();
break;
case 2: deque();
break;
case 3:display();
break;
case 4:exit(0);
break;
default:
printf("invalid choice");
}
}
void enque()
{
int x;
while(1)
new=malloc(sizeof(struct node));
new->next=NULL;
printf("enter the data");
scanf("%d",&x);
new->data=x;
if(front==NULL&& rear==NULL)
{
front=rear=new;
}
else
{
rear->next=new;
rear=new;
}
}
void deque()
{
temp=front;
if(front==NULL && rear==NULL)
{
printf("queue is empty");
}
else
{
front=front->next;
free(temp);
}
}
void display()
{
if(front==NULL)
{
printf("queue is empty");
}
else
{
printf("enter the elements");
for(temp=front;temp!=NULL;temp=temp->next)
{
printf("%d",temp->data);
}
}
}

