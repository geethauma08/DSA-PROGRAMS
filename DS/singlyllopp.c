//singly linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
}*current,*newnode,*temp,*head=NULL;
void creation();
void insertatbeg();
void insertatpos();
void insertatend();
void deleteatbeg();
void deleteatpos();
void deleteatend();
void display();
int length();
int choice,pos,i,num,count=0,n;
int main()
{
printf("1.creation\n2.display\n3.length\n4.insertatbeg\n5.insertatpos\n6.insertatend\n7.deleteatbeg\n8.deleteatpos\n9.deleteatend\n10.exit\n");
while(1)
{
printf("\nenter your choice:\n");
scanf("%d",&choice);
switch(choice)
{
case 1:creation();
break;
case 2:display();
break;
case 3:n=length();
if(n==0)
printf("no elements:\n");
else
printf("size=%d",n);
break;
case 4:insertatbeg();
break;
case 5:insertatpos();
break;
case 6:insertatend();
break;
case 7:deleteatbeg();
break;
case 8:deleteatpos();
break;
case 9:deleteatend();
break;
case 10:exit(0);
break;
default:printf("invalid\n");
break;
}
}
}
int length()
{
if(head==NULL)
{
return 0;
}
else
{
current=head;
while(current!=NULL)
{
count++;
current=current->next;
}
printf("number of nodes in the list=%d\n",count);
return count;
}
}
void creation()
{
printf("enter -1 to stop reading:\n");
printf("enter the data:\n");
scanf("%d",&num);
while(num!=-1)
{
newnode=(struct node*)malloc(sizeof(struct node));
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
current->next=newnode;
newnode->next=NULL;
}
printf("enter the data to create nodes:\n");
scanf("%d",&num);
}
}
void display()
{
printf("LIST CONTAINS:\n");
current=head;
while(current!=NULL)
{
printf("%d ",current->data);
current=current->next;
}
}
void insertatbeg()
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data to insert at beg:\n");
scanf("%d",&num);
newnode->data=num;
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
printf("inserted node at beg is=%d\n",newnode->data);
}
void insertatpos()
{ 
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data to insert at position:\n");
scanf("%d",&num);
newnode->data=num;
newnode->next=NULL;
printf("enter the position to insert the data:\n");
scanf("%d",&pos);
if(pos==1)
{
insertatbeg();
}
else if(pos>length())
{
printf("can't insert:\n");
}
else
{
current=head;
for(i=1;i<pos-1;i++)
{
current=current->next;
}
newnode->next=current->next;
current->next=newnode;
printf("inserted data at pos is=%d\n",newnode->data);
}
}
void insertatend()
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data to insert at end:\n");
scanf("%d",&num);
newnode->data=num;
current=head;
while(current->next!=NULL)
{
current=current->next;
}
current->next=newnode;
newnode->next=NULL;
printf("inserted data at end is=%d\n",newnode->data);
}
void deleteatbeg()
{
if(head==NULL)
printf("LIST IS EMPTY:\n");
else
{
current=head;
head=head->next;
free(current);
printf("deleted data at beg is=%d\n",current->data);
}
}
void deleteatpos()
{
printf("enter the position to delete the node:\n");
scanf("%d",&pos);
if(pos>length())
{
printf("can't delete:\n");
}
else if(pos==1)
{
deleteatbeg();
}
else
{
current=head;
for(i=0;i<pos-1;i++)
{
current=current->next;
}
temp=current->next;
current->next=temp->next;
free(temp);
printf("deleted data at pos is=%d\n",temp->data);
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
free(current);
printf("deleted data at end is=%d\n",current->data);
}
