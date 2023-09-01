#include<stdio.h>
struct node
{
    int data;
    char ch;
    struct node *ptr;
};

int main()
{
    struct node a,b,c;
    a.ch ='a';
    a.data =10;
    a.ptr =NULL;

    b.ch ='b';
    b.data =20;
    b.ptr =NULL;

    c.ch ='c';
    c.data =30;
    c.ptr =NULL;

    a.ptr =&b;
    b.ptr =&c;
    c.ptr =&a;

    printf("B:%d\t char :%c \n ",a.ptr->data,a.ptr->ch);
    printf("C:%d\t char :%c \n ",c.ptr->data,c.ptr->ch);
    printf("A:%d\t char :%c \n ",b.ptr->data,b.ptr->ch);

}

/*OUTPUT:-

B:20     char :b
 C:10    char :a
 A:30    char :c
*/