#include <stdio.h>
#include <stdlib.h>

int main()
{
    int height;
    printf("Enter the height u desire: ");
    scanf("%d", &height);

    int i, spaces, stars;

    //solid diamond
    for(i = 0; i <= (height/2); i++)
    {
        for(spaces = 1; spaces <= (height/2) - i; spaces++)
        {
            printf(" ");
        }
        for(stars = 0; stars <= (i); stars++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i = (height/2); i >= 0; --i)
    {
        for(spaces = 1; spaces <= (height/2) - i; spaces++)
        {
            printf(" ");
        }
        for(stars = 0; stars <= (i); stars++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n\n");

    //hollow diamond
    for(i = 0; i <= (height/2); i++)
    {
        for(spaces = 1; spaces <= (height/2) - i; spaces++)
        {
            printf(" ");
        }
        if(i == 0)
        {
            for(stars = 0; stars <= (i); stars++)
            {
                    printf("* ");
            }
        }
        else
        {
            printf("* ");
            for(stars = 1; stars <= (2*i - 2); stars++)
            {
                printf(" ");
            }
            printf("* ");
        }
        printf("\n");
    }
    for(i = (height/2); i >= 0; --i)
    {
        for(spaces = 1; spaces <= (height/2) - i; spaces++)
        {
            printf(" ");
        }
        if(i == 0)
        {
            for(stars = 0; stars <= (i); stars++)
            {
                printf("* ");
            }
        }
        else
        {
            printf("* ");
            for(stars = 1; stars <= (2*i - 2); stars++)
            {
                printf(" ");
            }
            printf("* ");
        }
        printf("\n");
    }
    printf("\n\n");

    //solid half diamond
    for(i = 0; i <= height / 2; i++)
    {
        for(stars = i; stars >= 0; --stars)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i = height/2 ; i >= 0; --i)
    {
        for(stars = i; stars >= 0; --stars)
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}
