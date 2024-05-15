//pushing into the stack
/*#include<stdio.h>
#include<stdlib.h>
#define MAX 6
int stack_arr[MAX];
int top=-1;
void push(int data)
{
if(top==MAX-1)
{
printf("stack is overflow");
return;
}
top=top+1;
stack_arr[top]=data;
}
void print()
{
int i;
if(top==-1)
{
printf("stack is undderflow");
return;
}
for(i=top;i>=0;i--)
{
printf("%d",stack_arr[i]);
printf("\n");
}
}
int main()
{
int data,choice;
while(1)
{
printf("\n");
printf("1.push\n");
printf("2.print all the elements in the stack\n");
printf("enter your choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("enter the element to be pushed");
scanf("%d",&data);
push(data);
break;
case 2:
print();
break;
}
}
return 0;
}*/
//write a c program to push ,peek,pop,print,isempty,isfull the elements into the stack.
#include<stdio.h>
#include<stdlib.h>
# define MAX 4
int stack_arr[MAX];
int top=-1; 
int isfull()
{
if(top==MAX-1)
{
return 1;
}
else
{
return 0;
}
}
int isEmpty()
{
if(top==-1)
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
if(isfull())
{
printf("stack is overflow");
}
top=top+1;
stack_arr[top]=data;
}
int pop()
{
int value;
if(isEmpty())
{
printf("stack is underflow");
exit(1);
}
value=stack_arr[top];
top=top-1;
return value;
}
int peek()
{
if(isEmpty())
{
printf("stack is underflow");
exit(1);
}
return stack_arr[top];
}
void print()
{
int i;
if(top==-1)
{
printf("stack is underflow");
return;
}
for(i=top;i>=0;i--)
{
printf("%d",stack_arr[i]);
printf("\n");
}
}
int main()
{
int data,choice;
while(1)
{
printf("\n");
printf("1.push\n");
printf("2.pop\n");
printf("3.printf the top elememt\n");
printf("4.printf all the elements in the stake\n");
printf("5.quit\n");
printf("enter the choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("enter the element to be pushed");
scanf("%d",&data);
push(data);
break;
case 2:
data=pop();
printf("deleted elements is %d\n",data);
break;
case 3:
printf("the topmost element in the stack:%d\n",peek());
break;
case 4:
print();
break;
case 5:
exit(1);
break;
default:printf("invalid choice");
}
}
return 0;
}


