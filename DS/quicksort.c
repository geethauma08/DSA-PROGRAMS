#include<stdio.h>
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
int main()
{
int n,i;
printf("enter the size of array");
scanf("%d",&n);
int a[n];
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
quick(a,0,n-1);
printf("sorted elements using after quick sort");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}


