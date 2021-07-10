  
/*Write a program to find the volume of cylinder using functions*/

#include <stdio.h>
#include <conio.h>
float volume(float,float);
void main()
   {  float r,h,res;
      printf("\n Enter the radius of the cylinder=");
      scanf("%f",&r);
      printf("\n Enter the height of the cylinder=");
      scanf("%f",&h);
      res=volume(r,h);
      printf("\n Volume of cylinder = %f",res);
      getch();
   }
float volume(float R, float H)
   {  float V;
      V=(3.14*R*R*H);
      return V;
   }
