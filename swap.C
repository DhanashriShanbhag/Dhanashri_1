/*Write a program to swap the value of two variables using functions*/

#include<stdio.h>
#include<conio.h>
void swap(int,int);
void main()
   {  int temp;
      temp=a;
      a=b;
      b=temp;
      printf("\n In function(call by value) a=%d and b=%d", a,b);
   }
int main();
   {  int a=1, b=2, c=3, d=4;
      printf("\n In main(), a=%d and b=%d", a,b);
    swap(a,b);
    return(0);
   }
