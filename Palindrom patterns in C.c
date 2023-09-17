#include <stdio.h>
#include <stdlib.h>

int main()
{
    int height, i, j;
    printf("Enter the height u desire: ");
    scanf("%d", &height);

    //palindrom half pyramid (Numbers)
    for(i = 0; i < height; i++)
    {
        Pal(i + 1);
        printf("\n");
    }
         printf("\n\n");


    //palindrom half pyramid (Alphabets)
    for(i = 0; i < height; i++)
    {
        Pal_A(i + 1);
        printf("\n");
    }
        printf("\n\n");


    //palindrom full pyramid (Numbers)
    for(i = 0; i < height; i++)
    {
        for(int spaces = (height - i); spaces >= 2; --spaces)
        {
            printf(" ");
        }
        Pal(i + 1);
        printf("\n");
    }
    printf("\n\n");

    //palindrom full pyramid (stars insted of spaces, printing i not j)
    for(i = 0; i < height; i++)
    {
        for(int stars = height - i; stars >= 0; --stars)
        {
            printf("*");
        }
        for(j = i; j >= 0; --j)
        {
            printf("%d*", i + 1);
        }
        for(int stars = height - i; stars > 0; --stars)
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}

void Pal(int N)
{
    for(int i = 0; i < N; i++)
    {
        printf("%d", i + 1);
    }
    for(int j = N; j > 0; --j)
    {
        if(j != 1)
        {
        printf("%d", j - 1);
        }
    }
}

void Pal_A(int N)
{
    for(int i = 64; i < N + 64; i++)
    {
        printf("%c", i + 1);
    }
    for(int j = N + 64; j > 64; --j)
    {
        if(j != 65)
        {
        printf("%c", j - 1);
        }
    }
}
