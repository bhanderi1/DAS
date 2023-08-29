//frist insert  
//last delete

#include<stdio.h>
#include<stdlib.h>
#define n 5

int f=-1,r=-1;
int arr[n];

int Lastinsert(int val)
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

int Firstdelete()
{
    if(f < 0)
    {
        printf("array is empty..\n");
    }
    else 
    {
      if(f==r)
      {

        f = r = -1;
      }

      else
      {
        f++;
      }
    }
}

int firstinsert(int val)
{
    if(f == 0){
      printf("Sorry to say not insert this time\n");
    }
    else if(f<0){
      f = r = 0;
      arr[f] = val;
    }
    else{
      f--;
      arr[f] = val;
    }
}

int lastdelete()
{
    if(f >= r)
    {
         printf("sorry to say not delete this time\n");
    }
   else if(f==r)
   {
       f=r=0;
       arr[r];
       //f = r = 0;
      // arr[r];
  }
  else
  {
        r--;
        arr[r];
     // r--;
     //arr[r];
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
   Lastinsert(10);
   Lastinsert(20);
   Lastinsert(30);
   Lastinsert(40);
   display();

   Firstdelete();
   display();

   lastdelete();     
   lastdelete();     
   display();

   firstinsert(50);
   display();

   

 
}