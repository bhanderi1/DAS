#include<stdio.h>
int main()
{
    int a=1,b=2,c=1,d;

    d = a||--b||c;
    printf("a: %d, b: %d, c: %d, d: %d",a,b,c,d);
}