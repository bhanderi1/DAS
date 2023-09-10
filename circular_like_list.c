#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head = NULL;

void insertEnd(int val){
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;

    if(head == NULL){
        head = temp;
        temp->next = head;
        return;
    }
    while(ptr->next != head)
    {
      ptr = ptr->next;
    }
    ptr->next = temp;
    temp->next = head;
    return;
}

void deleteEnd(){
    struct node *ptr = head;
    struct node *p ;
    if(head->next == head){
        head = NULL;
        free(ptr);
        return;  
    }
    while(ptr->next != head){
        p = ptr;
        ptr = ptr->next;
    }
    p->next = head;
    free(ptr);
    return;
}
void insertFirst(int val){
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;

    if(head == NULL){
        head = temp;
        temp->next = head;
        return;
    }
    while(ptr->next != head){
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->next = head;
    head = temp;
    return;
}

void deletFirst(){
    struct node *ptr = head;
    struct node *p = head;
    if(head->next == NULL){
        head = NULL;
        free(ptr);
        return;
    }
    while(ptr->next != head){
        ptr = ptr->next;
    }
    ptr->next = p->next;
    head = p->next;
    free(p);
    return;
}

void insertMid(int val, int pos){
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    
    while(ptr->data != pos){
        ptr = ptr->next;
    }
    temp->next = ptr->next;
    ptr->next = temp;
    return;
}

void deleteMid(int pos){
    struct node *ptr = head;
    struct node *p ;
    while(ptr->data != pos){
        p = ptr;
        ptr = ptr->next;
    }
    p->next = ptr->next;
    free(ptr);
    return;
}


void display(){
    struct node *ptr = head;
    if(head == NULL){
        printf("List is empty");
    }else{
        while(ptr->next != head){
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
        printf("%d ", ptr->data);
    }
    printf("\n");
}

int main(){
    insertFirst(10);
    display();

    insertMid(50,10);
    display();
    
    insertEnd(100);
    display();

   deleteMid(100);
   display();
}