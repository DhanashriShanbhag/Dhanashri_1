/*Write a program to convert time - hours into minutes, using functions*/

#include<stdio.h>
#include<conio.h>
int time(int,int);
void main()
 {  int min, res, Hr;
    printf("\n Enter the value of time in hours=");
    scanf("%d", &Hr);
    printf("\n Enter the value of time in minutes=");
    scanf("%d", &min);
    res=time(Hr,min);
    printf("\n Minute=%d", res);
    getch();
  }
int time(int H, int M)
  {  float R;
     R=(H*60)+M;
     return R;
  }
