/*#include<stdio.h>
#include<math.h>
char stack[20];
int top=-1;
int push(int);
int pop();
void sum();
void sub();
void multi();
void div();
void power();
int main()
{
int i;
char exp[20];
printf("enter the posetfixo expression");
scanf("%[^\n]s",exp);
for(i=0;exp[i]!='\0';i++)
{
switch(exp[i])
{
case 1:sum();
break;
case 2:sub();
break;
case 3:multi();
break;
case 4:div();
break;
case 5:power();
break;
default:
top++;
stack[top]=exp[i]-48;
}
}
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
void multi()
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
}*/
/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define  MAX 100
char stack[MAX],infix[MAX],postfix[MAX];
int top=-1;
void push(char);
char pop();
int isempty();
void intopost();
int space(char);
void print();
int  precedence(char);
int main()
{
printf("enter the expression");
gets(infix);
intopost();
print();
return 0;
}
void intopost()
{
int i,j=0;
char symbol,next;
for(i=0;i<strlen(infix);i++)
{
symbol=infix[i];
if(!space(symbol))
{
switch(symbol)
{
case '(':
push(symbol);
break;
case')':
while((next=pop())!='(')
postfix[j++]=next;
break;
case '+':
case '-':
case '*':
case '/':
case  '^':
while(isempty() && precedence(stack[top]>=precedence(symbol)))
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
if(c==' ' || c=='\t')
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
case '*':
case '/':
return 2;
case '+':
case '-':
return 1;
default:
return 0;
}
}
void print()
{
int i=0;
printf("postfix expression");
while(postfix[i])
{
printf("%c",postfix[i++]);
}
}
void push(char c)
{
if(top==MAX-1)
{
printf("stack is underflow");
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
printf("stack is underflow");
}
c=stack[top];
top=top-1;
return c;
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
}*/
/*#include<stdio.h>
#include<stdbool.h>
#define MAX_vertices 100
int graph[MAX_vertices][MAX_vertices];
bool visited[MAX_vertices];
int que[MAX_vertices];
int front=-1;
int rear=-1;
void enque(int vertex)
{
if(rear==MAX_vertices-1)
{
printf("underflow");
return;
}
if(front==-1)
{
front=0;
rear++;
que[rear]=vertex;
}
}
int deque()
{
if(front==-1 && front>rear)
{
printf("overflow");
return -1;
}
int vertex=que[front];
front++;
if(front>rear)
front=rear=-1;
return vertex;
}
void bfs(int start,int n)
{
int current;
enque(start);
visited[start]=true;
printf("bfs traversal");
while(front!=-1)
{
current=deque();
printf("%d",current);
for(int i=0;i<n;i++)
{
if(graph[current][i]==1 && !visited[i])
{
enque(i);
visited[i]=true;
}
}
}
printf("\n");
}
int main()
{
int n;
printf("enter the number of vertixcess");
scanf("%d ",&n);
for(int i=0;i<n;i++)
{
visited[i]=false;
for(int j=0;j<n;j++)
{
scanf("%d",&graph[i][j]);
}
}
int start_vertex;
printf("enter the number of vertices");
scanf("%d",&start_vertex);
bfs(start_vertex,n);
return 0;
}*/
/*#include<stdio.h>
#include<stdbool.h>
#define MAX_vertices 100
int graph[MAX_vertices][MAX_vertices];
bool visited[MAX_vertices];
void dfs(int vertex,int n)
{
visited[vertex]=true;
printf("%d",vertex);;
for(int i=0;i<n;i++)
{
if(graph[vertex][i]==1 && !visited[i])
{
dfs(i,n);
}
}
}
int main()
{
int i,n,j;
printf("enter the number of vertices");
scanf("%d",&n);
printf("enter the adjacency matrix");
for(i=0;i<n;i++)
{
visited[i]=false;
for(j=0;j<n;j++)
{
scanf("%d",&graph[i][j]);
}
}
int start_vertex;
printf("enter the vertex");
scanf("%d",&start_vertex);
dfs(start_vertex,n);
return 0;
}*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*left;
struct node*right;
}*newnode,*temp,*root=0;
struct node*create(int data)
{
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=data;
newnode->left=newnode->right=NULL;
return newnode;
}
struct node*insert(struct node*root,int data)
{
if(root==NULL)
{
 return create(data);
}
if(data<root->data)
{
root->left=insert(root->left,data);
}
else if(data>root->data)
{
root->right=insert(root->right,data);
}
return root;
}
struct node*delete(struct node*root,int key)
{
if(root==NULL)
{
return root;
}
else if(key<root->data)
{
root->left=delete(root->left,key);
}
else if(key>root->data)
{
root->right=delete(root->right,key);
}
else{
if(root->left==NULL)
{
temp=root->right;
free(root);
return temp;
}
else  if(root->right==NULL)
{
temp=root->left;
free(root);
return temp;
}
}
}
struct node*search(struct node*root,int key)
{
if(root==NULL|| root->data==key)
{
return root;
}
else if(key<root->data)
{
return search(root->left,key);
}
else 
{
return search(root->right,key);
}
}
void inorder(struct node*root)
{
if(root!=NULL)
{
inorder(root->left);
printf("%d\n",root->data);
inorder(root->right);
}
}
int main()
{
int i,n,choice,key;
while(1)
{
printf("1.insert\n");
printf("2.delete\n");
printf("3.search\n");
printf("4.inorder\n");
printf("enter the choice");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("enter the value to be inserted");
scanf("%d",&key);
root=insert(root,key);
break;
case 2:printf("enter the value to be deleted");
scanf("%d",&key);
root=delete(root,key);
break;
case 3:printf("enter the elements to be searched");
scanf("%d",&key);
if(search(root,key)!=NULL)
{
printf("the element is found in %d\n",key);
}
else
{
printf("%d is not found",key);
}
break;
case 4:printf("inorder");
inorder(root);
break;
case 5:printf("exit");
break;
default:printf("invalid choice");
}
}
}

