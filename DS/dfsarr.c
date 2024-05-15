#include<stdio.h>
#include<stdbool.h>
# define MAX_vertices 100
int graph[MAX_vertices][MAX_vertices];
bool visited[MAX_vertices];
void dfs(int vertex,int n)
{
visited[vertex]=true;
printf("%d",vertex);
for(int i=0;i<n;i++)
{
if(graph[vertex][i]==1 &&!visited[i])
{
dfs(i,n);
}
}
}
int main()
{
int n;
printf("enter the number of vertices in the graph:");
scanf("%d",&n);
printf("enter the adjency matrix:\n");
for(int i=0;i<n;i++)
{
visited[i]=false;
for(int j=0;j<n;j++)
{
scanf("%d",&graph[i][j]);
}
}
int start_vertex;
printf("enter the starting vertex for dfs:");
scanf("%d",&start_vertex);
printf("dfs traversal:");
dfs(start_vertex, n);
printf("\n");
return 0;
}
