/*Write a program using switch statement to see if the entered alpj=habet is a vowel or not*/

#include <stdio.h>
#include <conio.h>
void main()
  {
    char ch;
    printf("\n Enter an alphabet:");
    scanf("%c",&ch);
     switch(ch)
         {
              case 'a': printf("Vowel");
                        break;
              case 'e': printf("Vowel");
                        break;
              case 'i': printf("Vowel");
                        break;
              case 'o': printf("Vowel");
                        break;
              case 'u': printf("Vowel");
                        break;
              case 'A': printf("Vowel");
                        break;
              case 'E': printf("Vowel");
                        break;
              case 'I': printf("Vowel");
                        break;
              case 'O': printf("Vowel");
                        break;
              case 'U': printf("Vowel");
                        break;
              default: printf("\n It is not a vowel");
         }
       getch();
  }
