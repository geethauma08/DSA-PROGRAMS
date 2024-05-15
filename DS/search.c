#include<stdio.h>
#include<stdlib.h>
int  search();
void display();
struct node
{
int data;
struct node*next;
}*temp,*new,*head,*current;
int main()
{
int choice,ch;
while(choice)
{
new=(struct node*)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&new->data);
new->next=NULL;
if(head==NULL)
{
head=temp=new;
}
else
{
temp->next=new;
temp=new;
}
printf("do you want to continue");
scanf("%d",&choice);
}
temp=head;
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
while(ch!=3)
{
printf("enter the choice");
scanf("%d",&ch);
switch(ch)
{
case 1:search();
break;
case 2:display();
break;
case 3:exit(0);
break;
default:printf("invalid");
}
}
}
int search()
{
int key,index,temp;
current=head;
while(current->data==key)
{
index++;
current=current->next;
}
return(current!=0);
}
void display()
{
if(head==NULL)
{
printf("list is empty\n");
}
else
{
printf("the elements are\n");
while(temp!=0)
{
printf("%d",temp->data);
temp=temp->next;
}
}
}

