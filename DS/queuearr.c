#include<stdio.h>
#include<stdlib.h>
void enqueue();
void dequeue();
void display();
int que[100],front=-1,rear=-1,n;
int main()
{

printf("enter the size\n");
scanf("%d",&n);
int ch;
while(1)
{
printf("1.enqueue\n 2.dequeue\n 3.display\n 4.exit\n");
printf("enter the choice");
scanf("%d",&ch);
switch(ch)
{
case 1:enqueue();
break;
case 2:dequeue();
break;
case 3:display();
break;
case 4:printf("sucessfully completed\n");
exit(0);
default:printf("invalid choice\n");
}
}
}
void enqueue()
{
int x;
printf("enter the element\n");
scanf("%d",&x);
if(rear==n-1)
{
printf("queue is full\n");
}
else if(front==-1&& rear==-1)
{
front=0;
rear=0;
que[rear]=x;
}
else
{
rear=rear+1;
que[rear]=x;
}
}
void dequeue()
{
if(front==-1&&rear==-1)
{
printf("queue is empty\n");
}
else if(front==rear)
{
front=-1;
rear=-1;
}
else
{
printf("deleted element from queue %d\n",que[front]);
front=front+1;
}
}
void display()
{
int i;
if(front==-1 && rear==-1)
{
printf("queue is empty\n");
}
else
{
for(i=front;i<=rear;i++)
{
printf("%d\n",que[i]);
}
}
}

