//singly linklist implementation
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
}*new,*temp,*head;
int main()
{
int data,choice;
while(choice)
{
new=malloc(sizeof(struct node));
printf("ente the data");
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
printf("enter the choice");
scanf("%d",&choice);
}
temp=head;
while(temp!=0)
{
printf("%d",temp->data);
temp=temp->next;
}
}*/
/*doubly linklist implementation
#include<stdio.h>
#include<stdlib.h>
void delete();
void display();
struct node
{
int data;
struct node*next;
struct node*prev;
}*newnode,*head,*temp,*prevnode;
int main()
{
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
temp=head=newnode;
}
else
{
temp->next=newnode;
temp=newnode;
}
printf("do you want to continue");
scanf("%d",&choice);
}
temp=head;
while(temp!=0)
{
printf("%d",temp->data);
temp=temp->next;
}
while(ch!=2)
{
printf("enter the choice");
scanf("%d",&ch);
switch(ch)
{
case 1:delete();
break;
case 2:display();
break;
case 3:exit(0);
break;
default:printf("invalid choice");
}
}
}
void delete()
{
int data;
temp=head;
while(temp->next!=0)
{
prevnode=temp;
temp=temp->next;
}
if(temp==head)
{
head=0;
}
else
{
prevnode->next=0;
}
free(temp);
}
void display()
{
if(head==0)
{
printf("empty");
}
else
{
for(temp=head;temp!=NULL;temp=temp->next)
{
printf("%d",temp->data);
}
}
}*/
//circukar link list implementation
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
}*new,*head,*temp;
int main()
{
int data,choice;
while(choice)
{
new=malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&new->data);
new->next=0;
if(head==0)
{
temp=head=new;
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
while(temp!=0)
{
printf("%d",temp->data);
temp=temp->next;
}
}*/
/*#include<stdio.h>
#include<stdlib.h>
void beg();
void end();
void pos();
struct node
{
int data;
struct node*next;
}*new,*head,*temp;
int main()
{
int data,choice,ch;
while(choice)
{
new=malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&new->data);
new->next=NULL;
if(head==NULL)
{
temp=head=new;
}
else
{
temp->next=new;
temp=new;
}
printf("d you wnat to contine");
scanf("%d",&choice);
}
temp=head;
while(temp!=0)
{
printf("%d",temp->data);
temp=temp->next;
}
while(ch!=4)
{
printf("enter the choice");
scanf("%d",&ch);
switch(ch)
{
case 1:beg();
break;
case 2:end();
break;
case 3:pos();
break;
case 4:exit(0);
break;
default:printf("inavlid choice");
}
}
}
void beg()
{
int data,choice,item;
new=malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&item);
new->data=item;
if(head==0)
{
new->next=NULL;
head=new;
}
else
{
new->next=head;
head=new;
}
while(temp!=0)
{
printf("%d",temp->data);
temp=temp->next;
}
}
void end()
{
int data,choice,item;
new=malloc(sizeof(struct node));
printf("Enter the item");
scanf("%d",&item);
new->data=item;
temp=head;
while(temp->next!=0)
{
temp=temp->next;
}
new->next=NULL;
temp->next=new;
temp=head;
while(temp!=0)
{
printf("%d",temp->data);
temp=temp->next;
}
}
void pos()
{
int data,item,pos,i;
printf("enter the positin");
scanf("%d",&pos);
new=malloc(sizeof(struct node));
printf("enter the item");
scanf("%d",&item);
new->data=item;
if(head==0)
{
new->next=NULL;
head=new;
}
temp=head;
for(i=1;i<pos-1;i++)
{
temp=temp->next;
}
new->next=temp->next;
temp->next=new;
temp=new;
while(temp!=0)
{
printf("%d",temp->data);
temp=temp->next;
}
}*/
/*#include<stdio.h> singly deletion
#include<stdlib.h>
void beg();
void end();
void pos();
struct node
{
int data;
struct node*next;
}*new,*head,*temp,*ptr;
int main()
{
int data,choice,ch;
while(choice)
{
new=malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&new->data);
new->next=0;
if(head==0)
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
while(choice!=0)
{
printf("%d",temp->data);
temp=temp->next;
}
while(ch!=4)
{
printf("enter the choice");
scanf("%d",&ch);
switch(ch)
{
case 1:beg();
break;
case 2:end();
break;
case 3:pos();
break;
case 4:exit(0);
break;
default:printf("invalid choice");
}
}
}
void beg()
{
int data,item;
new=malloc(sizeof(struct node));
printf("enter the item");
scanf("%d",&item);
new->data=item;
if(head==0)
{
printf("empty");
}
else
{
temp=head;
head=head->next;
free(temp);
temp=head;
}
while(temp!=0)
{
printf("%d",temp->data);
temp=temp->next;
}
}
void end()
{
int data,item;
new=malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&item);
new->data=item;
temp=head;
while(temp->next!=0)
{
ptr=temp;
temp=temp->next;
}
ptr->next=NULL;
free(temp);
temp=head;
while(temp!=0)
{
printf("%d",temp->data);
temp=temp->next;
}
}
void pos()
{
int i,pos,item,data;
printf("enter the position");
scanf("%d",&pos);
new=malloc(sizeof(struct node));
printf("enter the item");
scanf("%d",&item);
new->data=item;
if(head==0)
{
new->next=NULL;
head=new;
}
else
{
temp=head;
for(i=1;i<pos-1;i++)
{
temp=temp->next;
}
ptr=temp->next;
temp->next=ptr->next;
free(ptr);
temp=head;
}
while(temp!=0)
{
printf("%d",temp->data);
temp=temp->next;
}
}*/
/*#include<stdio.h>
#include<stdlib.h>
void delete();
void display();
struct node
{
int data;
struct node*next;
struct node*prev;
}*new,*head,*temp,*prevnode;
int main()
{
int data,choice,ch;
while(choice)
{
new=malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&new->data);
new->prev=0;
new->next=0;
if(head==0)
{
temp=head=new;
}
else
{
temp->next=new;
temp=new;
}
printf("do you want to continu");
scanf("%d",&choice);
}
temp=head;
while(temp!=0)
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
case 1:delete();
break;
case 2:display();
break;
case 3:exit(0);
break;
default:printf("inavlid");
}}}
void delete()
{
int data,item;
temp=head;
while(temp->next!=0)
{
prevnode=temp;
temp=temp->next;
}
if(temp==head)
{
head=0;
}
else
{
prevnode->next=0;
}
free(temp);
}
void display()
{
if(head==0)
{
printf("empty");
}
else
{
for(temp=head;temp!=NULL;temp=temp->next)
{
printf("%d",temp->data);
}
}
}*/
/*#include<stdio.h>
#include<stdlib.h>
void insertatbeg();
void insertatend();
void insertatpos();
void display();
struct node
{
int data;
struct node*prev;
struct node*next;
}*new,*head,*tail,*temp,*prev;
int main()
{
int data,choice,ch;
head=0;
while(choice)
{
new=malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&new->data);
new->prev=0;
new->next=0;
if(head==0)
{
temp=head=new;
}
else
{
temp->next=new;
temp=new;
}
printf("do you wnat to continu");
scanf("%d",&choice);
}
temp=head;
while(ch!=4)
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
case 4:display();
break;
default:printf("invalid choice");
}
}
}
void insertatbeg()
{
int choice,item;
new=(struct node*)malloc(sizeof(struct node));
printf("enter the choice");
scanf("%d",&new->data);
new->prev=0;
new->next=0;
head->prev=new;
new->next=head;
head=new;
}
void insertatend()
{
int choice,item;
new=malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&new->data);
new->prev=0;
new->next=0;
tail->next=new;
new->prev=tail;
tail=new;
}
void insertatpos()
{
int data,item,pos,i=1;
printf("enter the position");
scanf("%d",&pos);
new=malloc(sizeof(struct node));
printf("enter the item");
scanf("%d",&item);
new->data=item;
if(head==0)
{
printf("empty");
}
else
{
temp=head;
for(i=1;i<pos-1;i++)
{
temp=temp->next;
}
i++;
new->prev-temp;
new->next=temp->next;
temp->next=new;
temp->next->prev=new;
}
}
void display()
{
if(head==0)
{
printf("empty");
}
else
{
for(temp=head;temp!=NULL;temp=temp->next)
{
printf("%d",temp->data);
}
}
}*/
/*#include<stdio.h>
#include<stdlib.h>
void quick(int a[],int low,int high)
{
int i,j,pivot;
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
j++;
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
}
quick(a,);
quick(a,
*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*left;
struct node*right;
}*temp,*head,*temp;
void create();
void display();
void insertatbeg();
void insertatend();
void insertatpos();
void deleteatbeg();
void deleteatend();
void deleteatpos();
int data,choice,i,n,pos;
int main()
{
printf("1.create.2.display.3.insertatbeg.4.insertatend.5,insertatpos,6.deleteatbeg.7.deleteatend.8,deleteatpod");
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
case 4insertatend();
break;
case 5:insertatpos();
break;
case 6:deleteatbeg();
break;
case 7:deleteatend();
break;
case 8:deleteatpos();
break;
case 9:printf("exit");
}
}
}void create()
{
printf("enter -1 to stop ");
printf("enter the data");
scanf("%d",&num);
while(num!=-1)
{
newnode=malloc(sizeof(struct node));
newnode->data=num;





