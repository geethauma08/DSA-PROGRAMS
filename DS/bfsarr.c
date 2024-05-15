#include<stdio.h>
#include<stdbool.h>
# define MAX_vertices 100
int graph [MAX_vertices][MAX_vertices];
bool visited[MAX_vertices];
int queue[MAX_vertices];
int front=-1;
int rear=-1;
void enqueue(int vertex)
{
if(rear==MAX_vertices-1)
{
printf("queue is overflow\n");
return;
}
if(front ==-1)
front=0;
rear++;
queue[rear]=vertex;
}
int dequeue()
{
if(front==-1 || front>rear)
{
printf("queue is underflow\n");
return -1;
}
int vertex=queue[front];
front++;
if(front>rear)
front=rear=-1;
return vertex;
}
void bfs(int start,int n)
{
int current;
enqueue(start);
visited[start]=true;
printf("bfs traversal:");
while(front!=-1)
{
current=dequeue();
printf("%d ",current);
for(int i=0;i<n;i++)
{
if(graph[current][i]==1 && !visited[i])
{
enqueue(i);
visited[i]=true;
}
}
}
printf("\n");
}
int main()
{
int n;
printf("enter the number of vertices in the graph:");
scanf("%d",&n);
printf("enter the adjacency matrix:\n");
for(int i=0;i<n;i++)
{
visited[i]=false;
for(int j=0;j<n;j++)
{
scanf("%d",&graph[i][j]);
}}
int start_vertex;
printf("enter the vertex for bfs:");
scanf("%d",&start_vertex);
bfs(start_vertex,n);
return 0;
}

