#include<stdio.h>
#define n 5

int a[n],top=-1;

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

int display()
{
    if(top<0)
       printf("array ia empty...\n");
    else
    {
        for(int i=0; i<=top; i++)
          printf("%d ",a[i]);
    }
}

int main()
{
    insertend(10);
    insertend(20);
    insertend(30);
    insertend(40);
    insertend(50);
    deletend();
    deletend();

    display();
    
    
}