/*Write a program to find the reverse of a number using for loop*/

#include <stdio.h>
#include <stdlib.h>
void main()
 {
      int num,rem,rev=0;
    printf("Enter a number for find reverse\n");
    scanf("%d",&num);
    printf("You entered %d\n",num);
    for(;num!=0; num=num/10)
    {
        rem=num%10;
        rev=rev*10+rem;
    }
    printf("Reverse of the given number %d",rev);
    getch();

 }
