#include <stdio.h>
#include <stdlib.h>

int main()
{
    int height, i, j;
    printf("Enter the height u desire: ");
    scanf("%d", &height);


    //half pyramid
    for(i = 0; i < height; i++)
    {
        for (j = 1; j <= i + 1; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    printf("\n\n");

    //inverted half pyramid
    for(i = height + 1; i >= 0; i--)
    {
        for (j = 1; j <= i - 1; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    //hollow half pyramid
    for(i = 0; i < height; i++)
    {
        for(j = 1; j <= i + 1; j++)
        {
            if(j == 1 || j == (i + 1) || i == (height - 1) )
            {
                printf("%d ", j);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n\n");

    //full pyramid
    int k;
    for(i = 0; i <= height - 1; i++)
    {
        for(k = 2; k <= height - i; k++)
        {
            printf(" ");
        }
        for(j = 1; j <= 2*i + 1; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    printf("\n\n");

    //hollow full pyramid
    for(i = 0; i <= height - 1; i++)
    {
        for(k = 2; k <= height - i; k++)
        {
            printf(" ");
        }
        for(j = 1; j <= 2*i + 1; j++)
        {
            if(j == 1 || i == (height - 1) || j == 2*i + 1)
            {
                printf("%d", j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
         printf("\n\n");

    //hollow inverted half pyramid
    for(i = height - 1; i >= 0; i--)
    {
        for(j = 1; j <= i + 1; j++)
        {
            if(j == 1 || j == (i + 1) || i == height - 1)
            {
                printf("%d ", j);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
