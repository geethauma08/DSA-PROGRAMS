//write aprogram to implement in an stack_arr[] using stack_arr[0] as the top element.
#include<stdio.h>
#include<stdlib.h>
#define MAX 4
int stack_arr[MAX];
int first=-1;
int isfull()
{
if(first==MAX-1)
{
return 1;
}
else
{
return 0;
}
}
int isempty()
{
if(first==-1)
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
int i;
if(isfull())
{
printf("stack is overflow");
exit(1);
}
first=first+1;
for(i=first;i>0;i--)
{
stack_arr[i]=stack_arr[i-1];
stack_arr[0]=data;
}
}
int pop()
{
int i,value;
if(isempty())
{
printf("stack is underflow");
exit(1);
}
value=stack_arr[0];
for(i=0;i<first;i++)
{
stack_arr[i]=stack_arr[i-1];
first=first-1;
return value;
}
}
int peek()
{
if(isempty())
{
printf("stack is underflow");
exit(1);
}
return stack_arr[0];
}
void print()
{
int i;
if(first==-1)
{
printf("stack is underflow\n");
exit(1);
}
for(i=0;i<=first;i++)
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
printf("3.print the topmost element in the stack\n");
printf("4.print all the elements in the stack\n");
printf("5.quit\n");
printf("enter the choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("enter the element to be inserted\n");
scanf("%d",&data);
push(data);
break;
case 2:
data=pop();
printf("deleted elements:%d\n",data);
break;
case 3:
printf("the topmost element in the stack%d\n",peek());
break;
case 4:
print();
break;
case 5:
exit(1);
break;
default:
printf("invalid choice");
}
}
return 0;
}
