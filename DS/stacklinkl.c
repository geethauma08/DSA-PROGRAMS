#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
}*top=0,*temp,*new;
int isempty()
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
void push(int data)
{
struct node *newnode;
newnode=malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("stack is underflow");
exit(1);
}
newnode->data=data;
newnode->next=NULL;
newnode->next=top;
top=newnode;
}
int pop()
{
struct node*temp;
int value;
if(isempty())
{
printf("stack is underflow");
exit(1);
}
temp=top;
value=temp->data;
top=top->next;
free(temp);
temp=NULL;
return value;
}
int peek()
{
if(isempty())
{
printf("stack is underflow");
exit(1);
}
return top->data;
}
void print()
{
struct node*temp;
temp=top;
if(isempty())
{
printf("Stack is underflow");
exit(1);
}
printf("the stack elements are:");
while(temp)
{
printf("%d ",temp->data);
temp=temp->next;
}
printf("\n");
}
int main()
{
int data,choice;
while(1)
{
printf("\n");
printf("1.push\n");
printf("2.pop\n");
printf("3.printf the topmost element\n :");
printf("4.print all the elements in the stack\n");
printf("5.quit\n");
printf("enter the choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("enter the element to be inserted");
scanf("%d",&data);
push(data);
break;
case 2:
data=pop();
printf("the deleted elememts :%d\n",data);
break;
case 3:
printf("the topmost element in the stack:%d\n",peek());
break;
case 4:
print();
break;
case 5:
exit(0);
break;
default:
printf("invalid choice");
}
}
return 0;
}

