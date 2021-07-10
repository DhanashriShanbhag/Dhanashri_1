/*Write a program to find the average of three integers using functions*/

#include<stdio.h>
#include<conio.h>
float avg(int,int,int);
void main()
  {  int a,b,c;
     float res;
     printf("\n Enter the value of three integers=");
     scanf("%d%d%d", &a,&b,&c);
     res=avg(a,b,c);
     printf("\n The average of the three integers= %f", res);
     getch();
  }
float avg(int a, int b, int c)
  {  float r1;
     r1=float(a+b+c)/3;
     return r1;
  }
     
