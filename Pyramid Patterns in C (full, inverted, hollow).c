#include <stdio.h>
#include <stdlib.h>

int main()
{
    int height;
    printf("Enter the height u desire: ");
    scanf("%d", &height);

    //Full pyramid
    int i, j, k;
    for(i = 0; i <= height; i++)
    {
        for(k = 1; k <= height - i; k++)
        {
            printf(" ");
        }
        for(j = 0; j <= (i - 1); j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n\n");

    //Full inverted pyramid
    for(i = height; i >= 1; i--)
    {
        for(k = 1; k <= height - i; k++)
        {
            printf(" ");
        }
        for(j = 0; j <= (i - 1); j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n\n");

    //Hollow full pyramid
    for(i = 1; i <= height; i++) {
      for(j = 1; j <= height-i; j++)
      {
         printf(" ");
      }
      if(i == 1 || i == height)
      {
         for(j = 1; j <= i; j++)
         {
            printf("* ");
         }
      } else {
         printf("*");
         for(j = 1; j <= (2*i - 3); j++)
         {
            printf(" ");
         }
         printf("*");
      }
      printf("\n");
   }
    printf("\n\n");


    return 0;
}
