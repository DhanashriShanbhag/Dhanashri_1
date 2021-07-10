/* Diplay all the arithematic operations for two integers using pointers */

#include <stdio.h>
#include <stdlib.h>
int main()
{  int first, second, *p, *q, sum, diff, prodt, div,remd;
   printf("Enter two integers to add\n");
   scanf("%d%d", &first, &second);
   p = &first;
   q = &second;
   sum = *p + *q;
   printf("Sum of the numbers = %d\n", sum);

   printf("Enter two integers to subtract\n");
   scanf("%d%d", &first, &second);
   p = &first;
   q = &second;
   diff= *p - *q;
   printf("Difference of the numbers = %d\n", diff);

   printf("Enter two integers to multiply\n");
   scanf("%d%d", &first, &second);
   p = &first;
   q = &second;
   prodt = *p * *q;
   printf("Product of the numbers = %d\n", prodt);

   printf("Enter two integers to divide\n");
   scanf("%d%d", &first, &second);
   p = &first;
   q = &second;
   div = *p / *q;
   printf("Division of the numbers = %d\n", div);

   printf("Enter two integers to remainder\n");
   scanf("%d%d", &first, &second);
   p = &first;
   q = &second;
   remd = *p % *q;
   printf("Remainder of the numbers = %d\n", remd);

   return 0;
}


