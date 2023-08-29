#include<stdio.h>
#define n 5

int a[n],top=-1,c,i;

int insertend(int val)
{
    if(top >=n-1)
        printf("array is full....\n");
    else
    {
        top++;
        a[top]=val;
    }
}

int deletend()
{
    if(top <0)
        printf("array is end....\n");
    else
    {
        top--;
        a[top];
    }
}

int insert(int val)
{   
   
    if(top>=n-1)
        printf("array is full..\n");
    else
    {
      top++;
      for(int i= top; i>=0; i--)
      {
      a[i] = a[i-1];
      }
       a[0] = val;
     }
   }


int delete()
{
    if(top <0)
        printf("array is end....\n");
    else
    {
        top--;
       for(i=0 ; i<=top; i++)
       {
           a[i]=a[i+1];
       }
      // a[0];
    }
}

int display()
{
    if(top<0)
       printf("array ia empty...\n");
    else
    {
        for(int i=0; i<=top; i++)
          printf("%d ",a[i]);
    }
    printf("\n");

}

int main()
{
    insertend(10);
    insertend(20);
    insertend(30);
   
     display();

     insert(40);
     insert(50);
   // insert(10);

      display();

      
    
      delete();
    
     display();


}

// LIFO
