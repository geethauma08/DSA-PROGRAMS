#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
# define MAX 100
int stack[MAX];
char infix[MAX],postfix[MAX];
int top=-1;
void push(int);
int pop();
int isempty();
void intopost();
void print();
int precedence(char);
int post_eval();
int main()
{
int result;
printf("enter the expression");
gets(infix);
intopost();
result=post_eval();
print();
printf("the result obtained postfix expression:");
printf("%d\n",result);
return 0;
}
void intopost()
{
int i,j=0;
char next,symbol;
for(i=0;i<strlen(infix);i++)
{
symbol=infix[i];
switch(symbol)
{
case'(':
push(symbol);
break;
case')':
while((next=pop())!='(')
postfix[j++]=next;
break;
case'+':
case'-':
case'*':
case '/':
case'^':
while(isempty()&&precedence(stack[top])>=precedence(symbol))
{
postfix[j++]=pop();
push(symbol);
break;
default:
postfix[j++]=symbol;
}
}
}
while(!isempty())
postfix[j++]=pop();
postfix[j]='\0';
}
int precedence(char symbol)
{
switch(symbol)
{
case '^':
return 3;
case'/':
case '*':
return 2;
case'+':
case'-':
return 1;
default:
return 0;
}
}
void print()
{
int i=0;
printf("the equivalent expression");
while(postfix[i]);
{
printf("%c",postfix[i++]);
}
printf("\n");
}
void push(int val)
{
if(top==MAX-1)
{
printf("stack is overflow");
return;
}
top++;
stack[top]=val;
}
int  pop()
{
int val;
if(top==-1)
{
printf("stack is underflow");
exit(1);
}
val=stack[top];
top=top-1;
return val;
}
int isempty()
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
int post_eval()
{
int i;
int a,b;
for(i=0;i<strlen(postfix);i++)
{
if(postfix[i]>='0' && postfix[i]<='9')
{
push(postfix[i]='0');
}
else
{
a=pop();
b=pop();
switch(postfix[i])
{
case '+':
push(a+b);
break;
case'-':
push(a-b);
break;
case'*':
push(a*b);
break;
case'/':
push(a/b);
break;
case'^':
push((b*b,a));
break;
}
}
}
return pop();
}
