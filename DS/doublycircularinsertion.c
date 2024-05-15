#include<stdio.h>
#include<stdlib.h>
void insertatbeg();
void insertatend();
void insertatpos();
void deleteatbeg();
void deleteatend();
void deleteatpos();
void display();
struct node
{
int data;
struct node*next;
struct node*prev;
}*newnode,*temp,*tail,*head,*temp1;
void main()
{
head=0;
int data,choice,ch;
while(choice)
{
newnode=malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&newnode->data);
newnode->prev=0;
newnode->next=0;
if(head==0)
{
head=tail=newnode;
head->next=head;
head->prev=head;
}
else
{
tail->next=newnode;
newnode->prev=tail;
newnode->next=head;
head->prev=newnode;
tail=newnode;
}
printf("do you want to continue:");
scanf("%d",&choice);
}
temp=head;
while(temp!=tail)
{
printf("%d",temp->data);
temp=temp->next;
}
printf("%d",temp->data);
while(ch!=9)
{
printf("enter the choice");
scanf("%d",&ch);
switch(ch)
{
case 1:insertatbeg();
break;
case 2:insertatend();
break;
case 3:insertatpos();
break;
case 4:deleteatbeg();
break;
case 5:deleteatend();
break;
case 6:deleteatpos();
break;
case 7:display();
break;
case 8:exit(0);
break;
default:printf("invalid position");
}
}
}
void insertatbeg()
{
int data;
newnode=malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&newnode->data);
if(head==0)
{
head=tail=newnode;
newnode->prev=tail;
newnode->next=head;
}
else
{
newnode->next=head;
head->prev=newnode;
head=newnode;
}
}
void insertatend()
{
int data;
newnode=malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&newnode->data);
newnode->next=0;
if(tail==0)
{
head=tail=newnode;
}
else
{
newnode->prev=tail;
tail->next=newnode;
newnode->next=head;
head->prev=newnode;
tail=newnode;
}
/*while(tail!=0)
{
printf("%d",tail->data);
tail=tail->next;
}*/
}
void insertatpos()
{
int data,pos,item,i;
printf("entert the position");
scanf("%d",&pos);
newnode=malloc(sizeof(struct node));
printf("enter the item");
scanf("%d",&item);
if(pos==0)
{
insertatbeg();
}
else
{
temp=head;
while(i<pos-1)
{
temp=temp->next;
i++;
}
newnode->prev=temp;
newnode->next=temp->next;
temp->next=newnode;
temp->next->prev=newnode;
}
}
void deleteatbeg()
{
newnode=malloc(sizeof(struct node));
printf("enter the ddata");
scanf("%d",&newnode->data);
temp=head;
if(head==0)
{
printf("empty");
}
else
{
head=head->next;
head->prev=tail;
tail->next=head;
free(temp);
}
}
void deleteatend()
{
newnode=malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&newnode->data);
temp=tail;
if(head==0)
{
printf("empty");
}
else
{
tail=tail->prev;
tail->next=head;
head->prev=tail;
free(temp);
}
}
void deleteatpos()
{
int pos,i;
printf("enter the position");
scanf("%d",&pos);
newnode=malloc(sizeof(struct node));
printf("enter the dta");
scanf("%d",&newnode->data);
temp=head;
if(pos==1)
{
deleteatbeg;
}
else
{
while(i<pos-1)
{
temp=temp->next;
i++;
}
temp1=temp->next;
temp->next=temp1->next;
temp1->next->prev=temp;
free(temp1);
}
}
void display()
{
temp=head;
if(head==NULL)
{
printf("list is empty");
}
else
{
while(temp!=tail)
{
printf("%d",temp->data);
temp=temp->next;
}
printf("%d",temp->data);
}
}


