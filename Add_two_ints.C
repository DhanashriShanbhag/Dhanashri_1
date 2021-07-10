/*Write a program to add two integers using functions*/

#include <stdio.h>
#include<conio.h>
int add(int,int);
 void main()
   { int a,b,res;
     printf("\n Enter the value of two integers=");
     scanf("%d%d",&a,&b);
     res=add(a,b);
     printf("\n Sum=%d",res);
     getch();
   }
int add(int A,int B)
   {  int sum;
      sum=A+B;
      return sum;
   }
