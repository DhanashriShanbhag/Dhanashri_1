/*Write a program to find the area of circle using functions*/
 
#include<stdio.h>
#include<conio.h>
float area(float);
void main()
   {  float res, r;
      printf("\n Enter the radius of the circle=");
      scanf("%f",&r);
      res=area(r);
      printf("\n Area= %f",res);
      getch();
   }
float area(float R)
    {  float A;
       A=(3.14*R*R);
       return A;
    }
