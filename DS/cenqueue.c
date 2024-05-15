#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
}*rear,*front,*que;
void main()
{
int x,n;
printf("enter the elements");
scanf("%d",&x);
if(rear+1)/n==front;
{
printf("full");
}
else if(front==-1 && rear==-1)
{
front=0;
rear=0;
que[rear]=x;
}
else
{
rear=(rear+1)/n;
que(rear)=x;
}
while(rear!=0)
{
printf("%d",rear->data);
rear=rear->next;
}
}

