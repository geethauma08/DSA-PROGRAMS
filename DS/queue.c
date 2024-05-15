#include<stdio.h>
#define MAX 5
void enque();
void deque();
void display();
int que[MAX],front=-1,rear=-1;
void main()
{
int choice=1;
do
{
printf("enter the choice\n");
scanf("%d",&choice);
printf("perform the following operations\n");
printf("1.enque()\n 2.deque()\n 3.display()\n 4.exit\n");
switch(choice)
{
case 1:enque();
break;
case 2:deque();
break;
case 3:display();
break;
case 4:printf("exit\n");
break;
default:printf("invalid choice\n");
}
}
while(choice!=4);
}
void enque()
{
int x;
printf("enter the element\n");
scanf("%d",&x);
if(rear==MAX-1)
{
printf("queue is overflow\n");
}
else if(front==-1&&rear==-1)
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
void deque()
{
if(front==-1&&rear==-1)
{
printf("queue is underflow\n");
}
else if(front==rear)
{
front=-1;
rear=-1;
}
else
{
printf("deleted element from the queue is %d\n",que[front]);
front=front+1;
}
}
void display()
{
int i;
if(front==-1&&rear==-1)
{
printf("queue is empty\n");
}
else
{
for(i=front;i<=rear;i++)
{
printf("%d\t",que[i]);
}
}
}

