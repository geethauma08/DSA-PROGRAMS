#include<stdio.h>
int heapify(int a[],int n,int i)
{
 int t,min,left,right;
  min=i;
  left=(2*i)+1;
  right=(2*i)+2;
 if(left<n && a[left]<a[min])
 {
  min=left;
  }
 if(right<n && a[right]<a[min])
 {
  min=right;
  }
 if(i!=min)
 {
  t=a[i];
  a[i]=a[min];
  a[min]=t;
  n=heapify(a,n,min);
  }
  return n;
 }
int builtheap(int a[],int n)
{
 int i;
 for(i=(n/2)-1;i>=0;i--)
 {
  n=heapify(a,n,i);
  }
  return n;
 for(i=0;i<n;i++)
 {
  printf("%d ",a[i]);
 }
}
int insertion(int a[],int n)
 {
  int x;
 printf("enter the element ");
 scanf("%d",&x);
 n=n+1;
 a[n-1]=x;
 n=builtheap(a,n);
 return n; 
 }
int deletion(int a[],int n)
{
 int end=a[n-1];
 a[0]=end;
 n=n-1;
 builtheap(a,n);
 } 
 int display(int a[],int n)
 {
  int i;
  for(i=0;i<n;i++)
  {
   printf("%d ",a[i]);
   }
  }
int main()
{
 int i,n,choice;
 printf("enter the array size ");
 scanf("%d",&n);
 int a[n];
 printf("enter the array elements\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  }
  n=builtheap(a,n);
  printf("after max heap:");
  for(i=0;i<n;i++)
  {
  printf("%d ",a[i]);
  }
  printf("\n"); 
 printf("for insertion(1),deletion(2),display(3),(4)exit(0)");
 while(choice!=0)
 {
  printf("\nenter your choice ");
  scanf("%d",&choice);
  switch(choice)
  {
  case 1:n=insertion(a,n);
        break;
  case 2:n=deletion(a,n);
        break;
  case 3:display(a,n);
        break;
   case 4:printf("exit");
   break;
  default:printf("invalid");
  }
 }
 }

