//linear search  by not using flag
/*#include<stdio.h>  
int main()
{
int i,n,j,k;
printf("enter the size");
scanf("%d",&n);
int a[n];
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the key");
scanf("%d",&k);
for(i=0;i<n;i++)
{
if(k==a[i])
{
printf("element is found:%d",i);
break;
}
}
if(i==n)
{
printf("element is not found");
}
return 0;
}*/
//linear search by using flag
#include<stdio.h>
int main()
{
int i,n,f=0,k;
printf("enter the size");
scanf("%d",&n);
int a[n];
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the key");
scanf("%d",&k);
for(i=0;i<n;i++)
{
if(k==a[i])
{
printf("element is present:%d",i);
f=1;
break;
}
}
if(f==0)
{
printf("element is not found");
}
return 0;
}


