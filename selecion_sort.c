#include<stdio.h>
#include<stdlib.h>
#define n 5

int a[n], i, j ,t;
int selection()
{
   for( i=0; i<n; i++)
    {
        for(j=0; j<n-1 ;j++)
        {
            if( a[i] <a[j])
            {
                t=a[i];
                a[i] = a[j];
                a[j]=t;
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
    selection(t,n);

  printf("\n selection array:\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}

//selection short

//->aek value badha j sathe compering kare