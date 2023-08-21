#include<stdio.h>
int main()
{
  int n,c;
      printf("enter array size:");
      scanf("%d",&n);

  int a[n],i;

     for(i=0;i<n;i++)
    {
         printf("enter element array :");
         scanf("%d",&a[i]);
    }

     c=a[0];
     
     for(i=0;i<n;i++)
    {
        a[i]=a[i+1];
    }

     a[n-1]=c;

     for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}