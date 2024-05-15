#include<stdio.h>
#include<stdlib.h>
struct node{
int vertex;
struct node*next;
};
struct adjlist{
struct node*head;
};
struct graph { 
int num_vertices;
struct adjlist*adjlists;
int*visited;
};
struct node*newnode(int vertex)
{
struct node*newnode=(struct node*)malloc(sizeof(struct node));
newnode->vertex=vertex;
newnode->next=NULL;
return newnode;
}
struct graph* create_graph(int n)
{
struct graph* graph=(struct graph*)malloc(sizeof(struct graph));
graph->num_vertices=n;
graph->adjlists=(struct adjlist*)malloc(n*sizeof(struct adjlist));
graph->visited=(int *)malloc(n*sizeof(int));
int i;
for(i=0;i<n;i++)
{
graph->adjlists[i].head=NULL;
graph->visited[i]=0;
}
return graph;
}
void add_edge(struct graph* graph,int src,int dest)
{
struct node*newnode1=newnode(dest);
newnode1->next=graph->adjlists[src].head;
graph->adjlists[src].head=newnode1;
struct node* newnode2=newnode(src);
newnode2->next=graph->adjlists[dest].head;
graph->adjlists[dest].head=newnode2;
}
void bfs(struct graph*graph,int v)
{
int queue[100];
int front=-1;
int rear=-1;
graph->visited[v]=1;
queue[++rear]=v;
while(front!=rear)
{
int current_vertex=queue[++front];
printf("%d",current_vertex);
struct node*temp=graph->adjlists[current_vertex].head;
while(temp!=NULL)
{
int adj_vertex=temp->vertex;
if(graph->visited[adj_vertex]==0)
{
graph->visited[adj_vertex]=1;
queue[++rear]=adj_vertex;
}
temp=temp->next;
}
}
}
int main()
{
struct graph*graph=create_graph(6);
add_edge(graph,0,1);
add_edge(graph,0,2);
add_edge(graph,1,2);
add_edge(graph,1,3);
add_edge(graph,2,3);
add_edge(graph,3,4);
add_edge(graph,4,5);
printf("BFS TRAVESRSAL STRATING VERTEX 0:using linklist:");
bfs(graph,0);
return 0;
}

