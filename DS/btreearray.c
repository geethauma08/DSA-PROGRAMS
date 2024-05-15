#include<stdio.h>
#include<stdlib.h>
void roots();
void left();
void right();
void display();
struct node 
{
char tree[10];
int data;
struct node *left;
struct node *right;
}newnode;
void main()
{
int choice;
printf("enter the choice");
scanf("%d",&choice);
switch(choice!=5)
{
case 1: roots();
break;
case 2: left();
break;
case 3: right();
break;
case 4: display();
break;
case 5:exit(0);
break;
default:printf("invalid");
}
}
void root(char key)
{
if(tree[0]!='\0')
{
printf("tree is empty");
}
else
{
tree[0]=key;
}
}
void left(int i,char key)
{
if(tree[i]!='\0')
{
printf("you can't find element");
}
else
{
tree([i*2]+1)=key;
}
}
void right(int i,char key)
{
if(tree[i]!='\0')
{
printf("you can't find element");
}
else
{
tree([i*2]+2)=key;
}
}
void display()
{
int j,i;
if(tree[i]!='\0')
{
for(j=0;j<10;j++)
{
printf("%c",tree[i]);
}
}
else
{
printf("_");
}
}

