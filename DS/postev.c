#include<stdio.h>
#include<math.h>
char stack [20];
int top=-1;
int push(int);
int pop();
void sum();
void sub();
void mul();
void div();
void power();
int main()
{
int i;
char exp[20];
printf("enter the postfix expression");
scanf("%[^\n]s",exp);
//gets(exp);
for(i=0;exp[i]!='\0';i++)
{
switch(exp[i])
{
case '+':sum();break;
case '-':sub();break;
case '*':mul();break;
case '/':div();break;
case '^':power();break;
default:
top++;
stack[top]=exp[i]-48;
}}
printf("%d",stack[top]);
}
void sum()
{
int a,b,result;
a=stack[top];
top--;
b=stack[top];
top--;
result=a+b;
top++;
stack[top]=result;
}
void sub()
{
int a,b,result;
a=stack[top];
top--;
b=stack[top];
top--;
result=b-a;
top++;
stack[top]=result;
}
void mul()
{
int a,b,result;
a=stack[top];
top--;
b=stack[top];
top--;
result=b*a;
top++;
stack[top]=result;
}
void div()
{
int a,b,result;
a=stack[top];
top--;
b=stack[top];
top--;
result=b/a;
top++;
stack[top]=result;
}
void power()
{
int a,b,result;
a=stack[top];
top--;
b=stack[top];
top--;
result=b^a;
top++;
stack[top]=result;
}








