#include<stdio.h>
#include<stdlib.h>
void enqueue();
void dequeue();
void display();
//void peek();
int choice,item;
struct node
{
int data;
struct node *next;
}*front=0,*rear=0,*new,*ptr,*temp;
int main()
{
//front=NULL;
//rear=NULL;
int choice=0;
printf("1.enqueue(insert)\n2.dequeue(delete)\n3.display\n4.exit");
while(choice!=5)
{
printf("enter your choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:enqueue();
break;
case 2:dequeue();
break;
case 3:display();
break;
case 4:exit(0);
break;
default:printf("invalid choice\n");
}
}
}
void enqueue()
{
new=malloc(sizeof(struct node));
printf("enter the item\n");
scanf("%d",&item);
new->data=item;
new->next=NULL;
if(front==NULL&&rear==NULL)
{
front=rear=new;
rear->next=front;
}
else
{
rear->next=new;
rear=new;
rear->next=front;
}
}
void dequeue()
{
if(front==NULL)
{
printf("circular queue is empty\n");
}
else if(front==rear)
{
printf("the deleted items:%d\n",front->data);
front=rear=NULL;
}
else
{
printf("the deleted items:%d\n",front->data);
front=front->next;
rear->next=front;
}
}
void display()
{
if(front==NULL)
{
printf("the circular queue is empty\n");
}
else
{
printf("the elements in list are\n:");
temp=front;
while(temp->next!=front)
{
printf("%d\t",temp->data);
temp=temp->next;
}
printf("%d\t",temp->data);
}
}
/*void peek()
{
if(front==NULL&& rear==NULL)
{
printf("queue is empty\n");
}
else
{
while(front!=NULL)
{
front=front->next;
}
printf("%d",front->data);
}
}*/
 
