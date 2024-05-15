//write a c program to implement the doubly linked list with operations
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
}*tail=NULL,*newnode,*head,*current,*ptr,*previous,*nextnode,*temp;
void creation();
void display();
void insertatbeg();
void insertatend();
void insertatpos();
void deleteatbeg();
void deleteatend();
void deleteatpos();
int choice,pos,i=1,num;
int main()
{
printf("1.creation\n2.display\n3.insertatbeg\n4.insertatpos\n5.insertatend\n6.deleteatbeg\n7.deleteatpos\n8.deleteatend\n9.exit\n");
while(1)
{
printf("\nenter your choice:\n");
scanf("%d",&choice);
switch(choice)
{
case 1: creation();
break;
case 2: display();
break;
case 3: insertatbeg();
break;
case 4: insertatpos();
break;
case 5: insertatend();
break;
case 6: deleteatbeg();
break;
case 7: deleteatpos();
break;
case 8: deleteatend();
break;
case 9:exit(0);
break;
default:printf("invalid\n");
break;
}
}
}
void creation()
{
printf("enter -1 to stop the creating of more nodes\n");
printf("enter the data\n");
scanf("%d",&num);
tail=NULL;
while(num!=-1)
{
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=num;
newnode->next=NULL;
if(tail==NULL)
{
tail=newnode;
tail->next=newnode;
}
else
{
newnode->next=tail->next;
tail->next=newnode;
tail=newnode;
}
printf("enter the data to create nodes\n");
scanf("%d",&num);
}
}
void display()
{
temp=tail->next;
printf("now the list contains\n");
while(temp->next!=tail->next)
{
printf("%d ",temp->data);
temp=temp->next;
}
printf("%d ",temp->data);
}
void insertatbeg()
{
printf("enter the data to insertatbeg\n");
scanf("%d",&num);
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=num;
newnode->next=NULL;
if(tail==NULL)
{
tail=newnode;
tail->next=newnode;
}
else
{
newnode->next=tail->next;
tail->next=newnode;
printf("inserted data at beg is=%d\n",newnode->data);
}
}
void insertatend()
{
printf("enter the data to insertatend\n");
scanf("%d",&num);
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=num;
newnode->next=NULL;
if(tail==NULL)
{
tail=newnode;
tail->next=newnode;
}
else{
newnode->next=tail->next;
tail->next=newnode;
tail=newnode;
printf("inserted data at end is=%d\n",newnode->data);
}
}
void insertatpos()
{
printf("enter position to insert the data\n");
scanf("%d",&pos);
printf("enter the data to insertatpos\n");
scanf("%d",&num);
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=num;
newnode->next=NULL;
temp=tail->next;
while(i<pos-1)
{
temp=temp->next;
i++;
}
newnode->next=temp->next;
temp->next=newnode;
printf("inserted data at pos is=%d\n",newnode->data);
}
void deleteatbeg()
{
temp=tail->next;
tail->next=temp->next;
printf("deleted data at beg is=%d\n",temp->data);
free(temp);
}
void deleteatend()
{
current=tail->next;
if(tail==NULL)
{
printf("list is empty");
}
else
{
while(current->next!=tail->next)
{
previous=current;
current=current->next;
}
previous->next=tail->next;
tail=previous;
printf("deleted data at end is=%d\n",current->data);
free(current);
}
}
void deleteatpos()
{
printf("enter position to delete the data\n");
scanf("%d",&pos);
if(pos==1)
{
deleteatbeg();
}
else
{
current=tail->next;
while(i<pos-1)
{
current=current->next;
i++;
}
nextnode=current->next;
current->next=nextnode->next;
printf("deleted data at pos is=%d\n",nextnode->data);
free(nextnode);
}
}

