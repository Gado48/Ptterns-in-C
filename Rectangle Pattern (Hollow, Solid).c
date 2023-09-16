#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cols;
    int rows;

    printf("Enter the number of Rows you want: ");
    scanf("%d", &cols);
    printf("Enter the number of Columns you want: ");
    scanf("%d", &rows);

    // Solid rectangle
    for(int i = 0; i < cols ; i++)
        {
            for(int j = 0; j < rows ; j++)
            {
                printf("*");
            }
        printf("\n");
        }
    printf("\n");

    // Hollow rectangle
    for(int k = 0; k < cols ; k++)
    {
        for(int l = 0; l < rows ; l++)
        {
            if(k == 0 || k == cols - 1 || l == 0 || l == rows - 1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
