#include<stdio.h>
int maxheapify(int a[],int n,int i)
{
 int t,max,left,right;
  max=i;
  left=(2*i)+1;
  right=(2*i)+2;
 if(left<n && a[left]>a[max])
 {
  max=left;
  }
 if(right<n && a[right]>a[max])
 {
  max=right;
  }
 if(i!=max)
 {
  t=a[i];
  a[i]=a[max];
  a[max]=t;
  n=maxheapify(a,n,max);
  }
  return n;
 }
int builtheap(int a[],int n)
{
 int i;
 for(i=(n/2)-1;i>=0;i--)
 {
  n=maxheapify(a,n,i);
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
  printf("after sorting maxheap\n");
  for(i=0;i<n;i++)
  {
  printf("%d ",a[i]);
  }
  printf("\n");
 printf("for insertion(1),deletion(2),display(3),(4)exit\n");
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
        case 4:printf("program succesfully excueted");
        break;
  default:printf("invalid");
  }
 }
}
