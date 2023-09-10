#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *next;   
};

struct  node *head=NULL;

void display()
{
   struct  node *ptr =head;
   if(head == NULL)
       printf("list is empty...");
   else
   {
    while(ptr !=NULL)
    {
        printf("%d ",ptr->data);
        ptr =ptr->next;
    }
   }
    printf("\n");
}

void insertend(int val)
{
    struct node *ptr =head;
    struct node *temp = malloc (sizeof(struct node));

    temp ->data =val;
    temp ->next=NULL;

    if(head == NULL)
    {
        head =temp;
        return ;
    }    
    while(ptr ->next !=NULL)
    {
        ptr =ptr->next;
    }
    ptr ->next =temp;
    return;
}

void deleteEnd()
{
    struct node *ptr =head;
    struct node *p;
    
    if(head ->next ==NULL)
    {
        head =NULL;
        free(ptr);
        return ;
    }
    while(ptr ->next != NULL)
    {
        p =ptr;
        ptr =ptr->next;
    }
    p->next =NULL;
    free(ptr);
    return;  
}

void firstinsert(int val)
{
    struct node *ptr =head;
    struct node *temp =malloc (sizeof(struct node));

    temp ->data =val;
    temp ->next =head;

    if(temp ->next =head)
    {
        head =temp;
        return;
    }
    while(head ==NULL)
    {
       head =temp;
       return;
   }
}

void firstdelete()
{
    struct node *ptr =head;

    if(head =ptr ->next)
    {
        free(ptr);
    }    
}

void midinsert(int val,int position)
{
    struct node *ptr =head;
    struct node *temp =malloc (sizeof(struct node));

    temp ->data =val; 
   
    while(ptr->data !=position)
    { 
       ptr=ptr->next; 
    } 

     temp->next =ptr->next;
     ptr->next =temp;
     return;
} 

void middelete(int position)
{

    struct node *ptr = head;
    struct node *p ;
    while(ptr->data != position){
        p = ptr;
        ptr = ptr->next;
    }
    p->next = ptr->next;
    free(ptr);
    return;
}

int main()
{
    insertend(10);
    display();

    firstinsert(40);
    display();
     
    midinsert(90,40);
    display();

    middelete(10);
    display();
}