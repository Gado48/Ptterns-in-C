#include <stdio.h>
#include <stdlib.h>

int main()
{
    int height;
    printf("Enter the desired height: ");
    scanf("%d", &height);

    // Half pyramid
    for(int i = 0; i < height; i++){
        for(int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");

    // Inverted Hald pyramid
    for(int i = height; i > 0; i--){
        for(int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");

    // Hollow Inverted Half pyranid
    for(int i = height; i > 0; i--){
        for(int j = 0; j < i; j++)
        {
            if(i == 0 || j == 0 || i == height || j == i - 1)
                printf("*");
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n\n");
    return 0;
}
