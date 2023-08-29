//fifo  =frist in frist out
//simple queue
//frist delete last insert


#include<stdio.h>
#include<stdlib.h>
#define n 5


int f=-1,r=-1;
int arr[n];

int insert(int val)
{

    if(r >= n)
    {
         printf("array is full...\n");
    }
    else
    {
     if(r < 0)
       { 
          f=r=0;
          arr[r]=val;
       }
     else
       {
         r++;
         arr[r]=val;

       }
    }
}

int delete()
{
    if(f < 0)
    {
        printf("array is empty..\n");
    }
    else 
    {
      if(f==r)
      {

        f= r = -1;
      }

      else
      {
        f++;
      }
    }
}

int display()
{
    for(int i=f; i<=r; i++)
    {
        printf("%d ",arr[i]);
    }
   printf("\n");

}

int main()
{
   insert(10);
   insert(20);
   insert(30);
   insert(40);
    display();
 
   delete();
   display();

  insert(50);
  insert(60);
   display();

   delete();
   display();


}

//output:-

//10 20 30 40 
//20 30 40
//20 30 40 50 60
//30 40 50 60