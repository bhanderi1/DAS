           //output:-

                 //42 18 35 1 20 25 29 9 13 15 
                 //Enter Search element: 1
                 //Element is found at 4 position

// => short array mate , compering 

#include <stdio.h>
#include <stdlib.h>
#define n 10
int i;
int a[n];
int linear(int x)
{
    for (i = 0; i < n; i++)
    {
        if (x == a[i])
        {
            return i+1;    // i+1 -> position,    i -> index
        }
    }
    return 0;
}


int main()
{
    int x, p;
    for (i = 0; i < n; i++)
    {
        a[i] = rand() % 50 + 1;
        printf("%d ", a[i]);
    }

    printf("\nEnter Search element: ");
    scanf("%d", &x);

    p = linear(x);

    if (p == 0){
        printf("Element is not found....");
    }
    else{
        printf("Element is found at %d position",p);
    }
}
