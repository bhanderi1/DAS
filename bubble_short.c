#include<stdio.h>
#include<stdlib.h>
#define n 5

int a[n],i,j,t;

int bubble()
{
    for( i=0; i< n; i++)
    {
        for(j=0; j<n-i; j++)
        {
            if( a[j] > a[j+1])
            {
                t=a[j];
                a[j] = a[j+1];
                a[j+1]=t;
            }
             
        }
    }
}

int main()
{ 
    for (i = 0; i < n; i++)
    {
        a[i] = rand() % 10 + 1;
        printf("%d ", a[i]);
    }
   // printf("%d",a[i]);

     bubble(t,n);

   printf("\n bubble array:\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

}

//bubble short

//-> 2-2 sathe compering thay  