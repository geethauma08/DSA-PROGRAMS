#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*link;
}top;
int isempty(struct node**top)
{
if(top==NULL)
{
return 1;
}
else 
{
return 0;
}
}
void push(int data,struct node** top1)
{
struct node*newnode;
newnode=malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("stack is overflow");
exit(1);
}
newnode->data=data;
newnode->link=NULL;
newnode->link=*top1;
*top1=newnode;
//return top;
}
int  pop(struct node** top)
{
struct node*temp;
int val;
if(isempty(top))
{
printf("stack is underflow");
exit(1);
}
temp=*top;
val=temp->data;
*top=(*top)->link;
free(temp);
temp=NULL;
return val;
}
void reverse_stack(struct node** top)
{
struct node *top1=NULL;
struct node *top2=NULL;
while(*top !=NULL)
{
push(pop(top),&top1);
}
while(top1!=NULL)
{
push(pop(&top1),&top2);
}
while(top2!=NULL)
{
push(pop(&top2),top);
}
}
void print(struct node** top)
{
struct node *temp;
temp=*top;
if(isempty(top))
{
printf("stack is underflow");
exit(1);
}
printf("the stack elements");
while(temp)
{
printf("%d",temp->data);
temp=temp->link;
}
printf("\n");
}
int main()
{
int data,choice;
struct node* top=NULL;
while(1)
{
printf("1.push\n");
printf("2.print\n");
printf("3.reverse the stack\n");
printf("4.quit\n");
printf("enter the choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("enter the elements to be pushed");
scanf("%d",&data);
push(data,&top);
break;
case 2:
printf(top);
break;
case 3:
reverse_stack(&top);
printf("stack is reversed\n");
break;
case 4:exit(0);
break;
default:
printf("invalid choice\n");
}
}
return 0;
}
