#include<stdio.h>
#include<stdlib.h>

int merge(int a[], int l, int mid ,int h)
{
    int b[100];
    int i = l, j=mid+1,k=l;
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
    int a[4],n=4,i,p;
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
    
    
      if(p !=-1)
      {
        printf("\n position: %d",p+1);
      }
      else
      { 
        printf("element is not found....");
      }
}





// binary search using recusive function




