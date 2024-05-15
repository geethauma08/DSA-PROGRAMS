#include<stdio.h>
#include<stdlib.h>
struct node{
int vertex;
struct node*next;
};
struct node*createnode(int v);
struct graph{
int numvertices;
int* visited;
struct node** adjlists;
};
void dfs(struct graph* graph,int vertex)
{
struct node* adjlist=graph->adjlists[vertex];
struct node* temp=adjlist;
graph->visited[vertex]=1;
printf("visited%d\n",vertex);
while(temp!=NULL)
{
int connectedvertex=temp->vertex;
if(graph->visited[connectedvertex]==0)
{
dfs(graph,connectedvertex);
}
temp=temp->next;
}
}
struct node* createnode(int v)
{
struct node* newnode=malloc(sizeof(struct node));
newnode->vertex=v;
newnode->next=NULL;
return newnode;
}
struct graph* creategraph(int vertices)
{
struct graph*graph=malloc(sizeof(struct graph));
graph->numvertices=vertices;
graph->adjlists=malloc(vertices*sizeof(struct node*));
graph->visited=malloc(vertices*sizeof(int));
int i;
for(i=0;i<vertices;i++)
{
graph->adjlists[i]=NULL;
graph->visited[i]=0;
}
return graph;
}
void addedge(struct graph* graph,int src,int dest)
{
struct node*newnode=createnode(dest);
newnode->next=graph->adjlists[src];
graph->adjlists[src]=newnode;
newnode=createnode(src);
newnode->next=graph->adjlists[dest];
graph->adjlists[dest]=newnode;
}
void printgraph(struct graph* graph)
{
int i;
for(i=0;i<graph->numvertices;i++)
{
struct node*temp=graph->adjlists[i];
printf("adjacency list of vertex %d ",i);
while(temp)
{
printf("%d->",temp->vertex);
temp=temp->next;
}
printf("\n");
}
}
int main()
{
struct graph*graph=creategraph(4);
addedge(graph,0,1);
addedge(graph,0,2);
addedge(graph,1,2);
addedge(graph,1,3);
addedge(graph,2,3);
addedge(graph,2,4);
addedge(graph,3,4);
printgraph(graph);
dfs(graph,3);
return 0;
}
