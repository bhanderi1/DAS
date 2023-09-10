#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;

void insertend(int val){
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL;

    if(head == NULL){
        head = temp;
        return;
    }
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->prev = ptr;
    return;
}

void deleteEnd(){

    struct node *ptr = head;
    struct node *p ;

    if(head->next == NULL){
        head = NULL;
        free(ptr);
        return;
    }
    while(ptr->next != NULL){
        p = ptr;
        ptr = ptr->next;
    }
    p->next = NULL;
    free(ptr);
    return;
}

void insertFirst(int val)
{
    struct node *ptr =head;
    struct node *temp =malloc (sizeof(struct node));

    temp ->data =val;
    temp ->prev =NULL;
    temp ->next =head;

    if(head ==NULL)
    {
        head =temp;
        return;
    }
    while(ptr->next!=NULL)
    {
       ptr->next =ptr;
       ptr->prev =head;
       temp =head;
       return;
   }
}

void deletFirst(){
    struct node *ptr = head;

    if(head->next == NULL)
    {
        head = NULL;
        free(ptr);
        return;
    }

    head = ptr->next;
    free(ptr);
    return;
}

void insertMid(int val, int pos){
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));

    temp->data = val;
    temp->prev =NULL;
    
    while(ptr->data != pos)
    {
        ptr = ptr->next;
    }
    temp->next = ptr->next;
    ptr->next = temp;
    return;
}


void deleteMid(int pos){
    struct node *ptr = head;
    struct node *p ;

    while(ptr->data != pos)
    {
        p = ptr;
        ptr = ptr->next;
    }

    p->next = ptr->next;
    free(ptr);
    return;
}


void display(){
    struct node *ptr = head;

    if(head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        while(ptr != NULL){
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\n");
}

int main()
{
    insertFirst(500);
    insertFirst(60);
    display();
}