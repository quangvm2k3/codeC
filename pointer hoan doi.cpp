#include<stdio.h>

int main() 
{
   int a = 20;
   int b = 15;
    
   int *ptr1, *ptr2;
   ptr1 = &a;
   ptr2 = &b;
   int tam;

   *ptr1 = tam;
   *ptr1 = *ptr2;
   *ptr2 = tam;
   printf("a = %d \nb = %d", a, b);
   return (0);
}
