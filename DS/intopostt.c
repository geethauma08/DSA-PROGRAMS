//write a program to convert an infix to its postfix expression using array.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include<math.h>
#define MAX 100
char stack[MAX];
char infix[MAX],postfix[MAX];
int top=-1;
void push(char);
char pop();
int isempty();
void intopost();
int space(char);
void print();
int precedence(char);
int main()
{
printf("enter the infix expression");
gets(infix);
intopost();
print();
return 0;
}
void intopost()
{
int i,j=0;
char next;
char symbol;
for(i=0;i<strlen(infix);i++)
{
symbol=infix[i];
if(!space(symbol))
{
switch(symbol)
{
case'(':
push(symbol);
break;
case ')':
while((next=pop())!='(')
postfix[j++]=next;
break;
case '+':
case '-':
case '*':
case '/':
case '^':
while(isempty() && precedence(stack[top])>=precedence(symbol))
postfix[j++]=pop();
push(symbol);
break;
default:
postfix[j++]=symbol;
}
}
}
while(!isempty())
{
postfix[j++]=pop();
postfix[j]='\0';
}
}
int space(char c)
{
if(c==' '||c=='\t')
return 1;
else
return 0;
}
int precedence(char symbol)
{
switch(symbol)
{
case '^':
return 3;
case '/':
case '*':
return 2;
case'+':
case '-':
return 1;
default:
return 0;
}
}
void print()
{
int i=0;
printf("the equivalent postfix expression");
while(postfix[i])
{
printf("%c",postfix[i++]);
}
printf("\n");
}
void push(char c)
{
if(top==MAX-1)
{
printf("stack is overflow");
return;
}
top++;
stack[top]=c;
}
char pop()
{
char c;
if(top==-1)
{
printf("stack is overflow");
exit(1);
}
c=stack[top];
top=top-1;
return c;
}
int isempty()
{
if(top==-1)
return 1;
else
return 0;
}

