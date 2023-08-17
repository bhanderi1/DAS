#include<stdio.h>
int main()
{
    int a=1,b=2,c=1,d;

   // d = a||--b||c;                                               //1 2 1 1
   // printf("a: %d, b: %d, c: %d, d: %d",a,b,c,d);
 
 //  d = a && --b && c;                                         //   1 1 1 1
 //   printf("a: %d, b: %d, c: %d,d: %d",a,b,c,d);

  //  d = --a && b && c;                                         // 0 2 1 0
  //  printf("a: %d, b: %d, c: %d,d: %d \n",a,b,c,d);

  //  d = --a ||b||c;                                // 0 2 1 1
  //  printf("a: %d, b: %d, c: %d, d: %d",a,b,c,d);

  //  d = a && b && --c;                            //  1 2 0 0      
  //  printf("a: %d, b: %d, c: %d, d: %d",a,b,c,d);

  // d = a ||b||--c;                                 // 1 2 1 1 
  //  printf("a: %d, b: %d, c: %d, d: %d",a,b,c,d);

  // d = ++a ||b||c;                                  // 2 2 1 1
  // printf("a: %d, b: %d, c: %d, d: %d\n",a,b,c,d);  
 
 //  d = ++a && b &&c;                               // 2 2 1 1 
 //  printf("a: %d, b: %d, c: %d, d: %d\n",a,b,c,d);

  // d = a ||++b||c;                                  1 2 1 1
  // printf("a: %d, b: %d, c: %d, d: %d\n",a,b,c,d);

 //  d = a &&++b &&c;                                 3 3 1 1
 //  printf("a: %d, b: %d, c: %d, d: %d\n",a,b,c,d);

 //  d = a ||b||++c;                                  3 3 1 1  
 //  printf("a: %d, b: %d, c: %d, d: %d\n",a,b,c,d);

 //  d = a &&b &&++c;                                 3 3 2 1 
 //  printf("a: %d, b: %d, c: %d, d: %d\n",a,b,c,d);

 //    d = ++a ||++b ||c;                               2 2 1 1  
 //   printf("a: %d, b: %d, c: %d, d: %d\n",a,b,c,d);

 //    d = ++a &&b &&++c;                               3 2 2 1
 //     printf("a: %d, b: %d, c: %d, d: %d\n",a,b,c,d);

//     d = a ||++b ||++c;                                1 2 1 1  
//   printf("a: %d, b: %d, c: %d, d: %d\n",a,b,c,d);

//     d = a &&++b &&++c;                               1 3 2 1
//     printf("a: %d, b: %d, c: %d, d: %d\n",a,b,c,d);

//    d = --a &&--b &&c;                               //0 2 1 0
//    printf("a: %d, b: %d, c: %d, d: %d\n",a,b,c,d);

 //  d = --a ||--b ||c;                               //0 1 1 1
 //   printf("a: %d, b: %d, c: %d, d: %d\n",a,b,c,d);

//   d = --a &&b &&--c;                               // 0 2 1 0
//    printf("a: %d, b: %d, c: %d, d: %d\n",a,b,c,d);

//   d = --a ||b ||--c;                               // 0 2 1 1
//    printf("a: %d, b: %d, c: %d, d: %d\n",a,b,c,d);

    c=a||++b;                                         //1 2 1
    printf("a:%d, b:%d, c:%d",a,b,c);

}


