/*Write a program to square the integer using functions*/

#include <stdio.h>
#include <conio.h>
float square(float);
void main()
  {  float x,res;
     printf("\n Enter an integer to be squared=");
     scanf("%f",&x);
     res=square(x);
     printf("\n Sqaure is= %f",res);
     getch();
  }
float square(float A)
   { float Sq;
     Sq=A*A;
     return Sq;
   }
