#include<stdio.h>
#define n 8
int a[]={11,21,31,41,51,61,71,81};

int bineary()
{
    int l=0,h=n-1, mid,x;
    printf("\nEnter search element: ");
    scanf("%d",&x);

     while(l<=h)
    {
             mid = (l+h)/2;
    
       if(a[mid] == x)
       {
          return mid+1;            
       }
       else if(a[mid] < x)
       {
          l=mid+1;
       }
       else if(a[mid] >x)
       {
          h=mid-1;
       }
    }
      return -1;

}


int main()
{
    int p;

    
      for(int i=0; i<n; i++)
      {
        printf("%d ",a[i]);
      }
     // printf("\n");

      p =bineary();

      if(p >=0)
      {
        printf("position: %d",p);
      }
      else
      { 
        printf("element is not found....");
      }

}