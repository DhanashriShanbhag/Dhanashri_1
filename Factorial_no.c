/*Write a program to find the factorial of a number using for loop*/

#include <stdio.h>
#include <stdlib.h>
void main()
 {  int i,n,fact=1;
    printf("\n Enter an integer:");
    scanf("%d",&n);
    for(i=n;i>0;i--)
     {
     fact=fact*i;
     }
   printf("\n Factorial is %d",fact);
 getch();
 }
