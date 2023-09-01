//asscending order

/*before sorting array is: 
42 18 35 1 20 25 29 9 13 15 6 46 32 28 12
 after sorting array is:
1 6 9 12 13 15 18 20 25 28 29 32 35 42 46
Enter search element: 29

 position: 11
*/
#include<stdio.h>
#include<stdlib.h>

int merge(int a[], int l, int mid ,int h)
{
    int b[100];
    int i =l, j=mid+1,k=l;
    while(i<=mid && j<=h)
    {
        if(a[i] < a[j])
           b[k++] =a[i++];
        else
           b[k++] =a[j++];
    }

    while(i <= mid)
        b[k++] =a[i++];
    while(j<=h)
        b[k++] =a[j++];

            for(i =l; i<=h; i++)
               a[i]=b[i];
}

int mergesort (int a[],int l,int h)
{
    int mid;
    if(l<h)
     {
        mid =(l+h)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,h);
        merge(a,l,mid,h);

     }
}
int binary(int a[],int l,int h)
{
    int x;
    printf("\nEnter search element: ");
    scanf("%d",&x);
    
        int mid;
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
    int a[15],n=15,i,p;
    for(i=0; i<n; i++)
        a[i] = (rand()%50)+1;

    printf("before sorting array is: \n");

    for(i=0; i<n; i++)
       printf("%d ",a[i]);
    
    mergesort(a, 0 ,n-1);
    printf("\n after sorting array is: \n"); 

    for(i=0; i<n; i++)
       printf("%d ",a[i]);

    p= binary(a,0,n-1);
    
    
      if(p!=-1)
      {
        printf("\n position: %d",p);
      }
      else
      { 
        printf("element is not found....");
      }
}





// binary search using recusive function




