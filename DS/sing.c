#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
}*newnode,*temp,*head,*current;
void create();
void display();
void insertatbeg();
void insertatend();
void insertatpos();
void deleteatbeg();
void deleteatend();
void deleteatpos();
int i,n,data,choice,i=0,pos,num;


int main()
{
int choice;
printf("1.create\n.2.display\n.3.insertatbeg\n,4.insertatend\n.5.insertatpos\n,6.deletatbeg\n,7deleteatend\n.8,deleteatpos\n");
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
case 4:insertatend();
break;
case 5:insertatpos();
break;
case 6:deleteatbeg();
break;
case 7:deleteatend();
break;
case 8:deleteatpos();
break;
case 9:exit;
break;
default:printf("invalid choice");
}
}
}
void create()
{
int data,num;
printf("enter the data -1 to stop");
scanf("%d",&num);
while(num!=-1)
{
newnode=malloc(sizeof(struct node));
newnode->data=num;
newnode->next=NULL;
if(head==0)
{
newnode->next=head;
head=newnode;
}
current=head;
while(current->next!=0)
{
newnode->next=current->next;
current->next=newnode;
}
printf("enter the data");
scanf("%d",&num);
}
}
void display()
{
current=head;
printf("the elements are");
while(current!=NULL)
{
printf("%d ",current->data);
current=current->next;
}
}
void insertatbeg()
{
int data,num;
newnode=malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&num);
newnode->data=num;
newnode->next=NULL;
if(head==0)
{
newnode->next=NULL;
head=newnode;
}
else
{
newnode->next=head;
head=newnode;
}
}
void insertatend()
{newnode=malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&num);
newnode->data=num;
current=head;
while(current->next!=0)
{
current=current->next;
}
current->next=newnode;
newnode->next=NULL;
}
void insertatpos()
{
int i,pos,n;
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
current=current->next;
i++;
}
newnode->next=current->next;
current->next=newnode;
printf("%d",newnode->data);
}
}
void deleteatbeg()
{
if(head==0)
{
printf("empty");
}
else
{
current=head;
head=head->next;
printf("the deleted element is :%d\n",current->data);
free(current);
}
}
void deleteatend()
{
current=head;
while(current->next!=0)
{
temp=current;
current=current->next;
}
temp->next=0;
printf("%d",current->data);
free(current);
}
void deleteatpos()
{
current=head;
printf("enter the postion");
scanf("%d",&pos);
if(pos==1)
{
deleteatbeg();
}
else
{
pos--;
while(i<pos-1)
{
current=current->next;
i++;
}
temp=current->next;
current->next=temp->next;
printf("%d",temp->data);
free(temp);
}
}





