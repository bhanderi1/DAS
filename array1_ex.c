#include<stdio.h>
int main()
{
        int m,n;
        printf("Enter size of array1: ");
        scanf("%d",&m);
        printf("Enter size of array2: ");
        scanf("%d",&n);
        
    int array1[m],array2[n],array[m+n],i;

    for( i=0; i<m; i++)
    {
            printf("enter value a[%d]:",i);
            scanf("%d",&array1[i]);
    }  
    printf("\n");
         

     for(i=0; i<n; i++)
    {
            printf("enter value b[%d]:",i);
            scanf("%d",&array2[i]); 
    }
    printf("\n");
    

    for(i=0; i<m; i++)
    {
       array[i] = array1[i];
    }
    for(i=0; i<n; i++)
    {
       array[i+m] = array2[i];
    }
    for(i=0; i<n+m; i++)
    {
       printf("%d ",array[i]);
    }
}