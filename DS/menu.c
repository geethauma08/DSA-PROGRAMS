#include<stdio.h>
int sum(int [],int);
int avg(int [],int);
int smallest(int [],int);
int largest(int [],int);
int main()
{
int i,n,choice,m,l,s;
float v;
printf("enter the size");
scanf("%d",&n);
int a[n];
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("press 1 to sum of the elements\n");
printf("press 2 to avg of the elements\n");
printf("press 3 to smallest of the elements\n");
printf("press 4 to largest of the elements\n");
for(i=0;i<=n;i++)
{
scanf("%d",&choice);
switch(choice)
{
case 1:s=sum(a,n);
printf("sum:%d\n",s);
break;
case 2:v=avg(a,n);
printf("average:%f\n",v);
break;
case 3:m=smallest(a,n);
printf("smallest:%d\n",m);
break;
case 4:l=largest(a,n);
printf("largest:%d\n",l);
break;
case 5:printf("invalid");
break;
}
}
int avg(int a[],int n)
{
int sum=0,v,l;
int i;
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
v=sum/n;
return v;
}
int smallest(int a[],int n)
{
int m,i,smallest;
smallest=a[0];
for(i=0;i<n;i++)
{
if(smallest>a[i])
{
smallest=a[i];
}
return smallest;
}}
int largest(int a[],int n)
{
int m,l,largest;
largest=a[0];
for(i=0;i<n;i++)
{
if(largest<a[i])
{
largest=a[i];
}
return largest;
}}
}

