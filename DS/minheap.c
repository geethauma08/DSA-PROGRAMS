#include<stdio.h>
#include<stdlib.h>
#define size 10
int tree[size]={0};
int last=-1;
void swap(int a,int b)
{
int t=tree[a];
tree[a]=tree[b];
tree[b]=1;
}
void insertmean(int key)
{
last++;
tree[last]=key;
int i=last;
while(i>0)
{
int parent=(i-1)/2;
if(tree[parent]>tree[i])
{
swap(parent,i);
i=parent;
}
else
{
break;
}
}
}
void print()
{
if(tree[0]==0)
{
printf("no tree is present");
}
else
{
for(int i=0;i<=last;i++)
{
printf("%d\n",tree[i]);
}
}
}
int delete()
{
int del=tree[0];
int i=0;
tree[i]=tree[last];
last--;
while(1)
{
int left=(i*2)+1;
int right=(i*2)+2;
int smallest=i;
if(left<=last && tree[left]<tree[right])
{
smallest=left;
}
if(right<=last && tree[right]<tree[left])
{
smallest=right;
}
if(smallest!=i)
{
swap(i,smallest);
i=smallest;
}
else
{
break;
}
}
return del;
}
int main()
{
insertmean(2);
insertmean(3);
insertmean(4);
insertmean(5);
insertmean(6);
insertmean(7);
insertmean(8);
printf("\ntree after inserting\n");
print();
printf("\nthe deleted element is:%d\n",delete());
printf("\nafter the deletion tree\n");
print();
}

























