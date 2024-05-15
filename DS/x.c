/*#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
}*temp,*newnode,*head,*current;
void create();
void display();
void insertatbeg();
void insertatpos();
void insertatend();
void deleteatbeg();
void deleteatpos();
void deleteatend();
int num,choice,count=1,i=1,pos;
int main()
{
printf("1.create()\n.2.display()\n.3.inseratbeg()\n.4insertatpos()\n.5.insertatend()\n.6.deleteatbeg()\n.7.deleteatpos()\n.8.deleteatend()\n.9.exit\n");
while(1)
{
printf("enter the choice");
scanf("%d",&choice);
switch(choice)
{
case 1:create();
break;
case 2:display();
break;
case 3:insertatbeg();
break;
case 4:insertatpos();
break;
case 5:insertatend();
break;
case 6:deleteatbeg();
break;
case 7:deleteatpos();
break;
case 8:deleteatend();
break;
case 9:exit(0);
break;
default:printf("invalid choice\n");
}
}
}
void create()
{
printf("enter -1 to stop create\n");
printf("enter the data\n");
scanf("%d",&num);
while(num!=-1)
{
newnode=malloc(sizeof(struct node));
newnode->data=num;
if(head==NULL)
{
newnode->next=NULL;
head=newnode;
}
else
{
current=head;
while(current->next!=NULL)
{
current=current->next;
}
current->next=newnode->next;
newnode->next=NULL;
}
printf("enter the data to create the node\n");
scanf("%d",&num);
}
}
void display()
{
current=head;
printf("the link list contains:\n");
while(current!=NULL)
{
printf("%d ",current->data);
current=current->next;
}
}
void insertatbeg()
{
newnode=malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&num);
newnode->data=num;
newnode->next=NULL;
if(head==NULL)
{
newnode->next=NULL;
head=newnode;
}
else
{
newnode->next=head;
head=newnode;
}
printf("the inserted data:%d\n",newnode->data);
}
void insertatpos()
{
printf("enter the position");
scanf("%d",&pos);
newnode=malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&num);
newnode->data=num;
newnode->next=NULL;
if(pos==1)
{
insertatbeg();
}
else
{
current=head;
pos--;
if(i<pos-1)
{
current==current->next;
i++;
}
newnode->next=current->next;
current->next=newnode;
}
printf("the data to be inserted:%d\n",newnode->data);
}
void insertatend()
{
newnode=malloc(sizeof(struct node));
printf("enter the data\n");
scanf("%d",&num);
newnode->data=num;
current=head;
while(current->next!=NULL)
{
current=current->next;
}
current->next=newnode;
newnode->next=NULL;
printf("the data to be inserted:%d\n",newnode->data);
}
void deleteatbeg()
{
if(head==NULL)
{
printf("empty\n");
}
else
{
current=head;
head=head->next;
printf("%d",current->data);
free(current);
}
}
void deleteatpos()
{
current=head;
printf("enter the position\n");
scanf("%d",&pos);
if(pos==1)
{
deleteatbeg();
}
else
{
pos--;
if(i<pos-1)
{
current=current->next;
i++;
}
temp=current->next;
current->next=temp->next;
printf("%d\n",temp->data);
free(temp);
}
}
void deleteatend()
{
current=head;
while(current->next!=NULL)
{
temp=current;
current=current->next;
}
temp->next=NULL;
printf("%d",current->data);
free(current);
}*/
/*#include<stdio.h>
void quick(int a[],int low,int high)
{
int i,j,pivot,t;
if(low<high)
{
i=low;
j=high;
pivot=low;
while(i<j)
{
while(a[i]<=a[pivot])
i++;
while(a[j]>a[pivot])
j--;
if(i<j)
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
t=a[j];
a[j]=a[pivot];
a[pivot]=t;
quick(a,low,j-1);
quick(a,j+1,high);
}
}
int main() quick sort
{
int i,n;
printf("enter the size of an array");
scanf("%d",&n);
int a[n];
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
quick(a,0,n-1);
printf("after the sorting ");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}*/
/*#include<stdio.h>                       merge sort
#include<stdlib.h>
# define SIZE 100
void merge(int arr[],int,int,int)
void merge_sort(int arr[],int,int)
void main()
{
int,i,n,arr[SIZE];
printf(("enter the size");
scanf("%d",&n);
int a[n];
printf("enter the eleements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
merge_sort(arr,0,n-1);
printf("after the sorted");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
void merge(int arr[],int beg,int mid,int end)
{
int i=beg,j=mid+1,index=beg,temp[size],k;
while(i<=mid && j<=end)
{
if(arr[i]<=arr[j])
{
temp[index]=arr[i];
i++;
index++;
}
else
{
temp[index]=arr[j];
j++;
index++;
}
}
if(i>mid)
{
while(j<=end)
{
temp[index]=arr[j];
j++;
index++;
}
}
else
{
while(i<=mid)
{
temp[index]=arr[i];
i++;
index;
}
for(k=0;k<index;k++)
arr[k]=temp[k];
}
}
void merge_sort(int arr[],int beg,int end)
{
int mid;
if(beg<end)
{
mid=(beg+end)/2;
merge(arr,beg,mid);
merge(arr,mid+1,end);
merge_sort(arr,beg,mid,end);
}
}*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
}*newnode,*new,*temp,*top=0;
int isempty()
{
if(top==0)
{
return 1;
}
else
{
return 0;
}
}
void push()
{
int data;
newnode=malloc(sizeof(struct node));
//printf("%d",&data);
if(newnode==0)
{
printf("stack is underflo");
}
newnode->data=data;
newnode->next=0;
newnode->next=top;
top=newnode;
}
int pop()
{
int value;
if(isempty())
{
printf("stack is underf;ow");
exit(1);
}
temp=top;
value=temp->data;
top=top->next;
free(temp);
temp=0;
return value;
}
int peek()
{
if(isempty())
{
printf("stack is underflow");
}
else
{
return top->data;;
}
}
void print()
{
temp=top;
if(isempty())
{
printf("stack is underflow");
}
while(temp)
{
printf("%d ",temp->data);
temp=temp->next;
}
}
int main()
{
int data,choice;
while(1)
{
printf("1.push\n");
printf("2.pop\n");
printf("3.topmost elements\n");
printf("4.all the elements in the stack\n");
printf("5.exit\n");
printf("enter the choice\n");
scanf("%d",&choice);
switch(choice)
{ 
case 1:
printf("enter the data");
scanf("%d",&data);
push(data);
break;
case 2:
data=pop();
printf("the deleted elements:%d\n",data);
break;
case 3:
printf("the topmost element is :%d\n",peek());
break;
case 4:
print();
break;
case 5:
printf("exit");
break;
default:printf("ibvalid choice:");
}
}
}



