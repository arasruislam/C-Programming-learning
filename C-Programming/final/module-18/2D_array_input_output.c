#include <stdio.h>

int main()
{
    // declare 2D array
    int a[5][3];        //a[row][column]
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // printf("%d %d\n", i, j);
            // printf("a[%d][%d] ", i, j);
            scanf("%d", &a[i][j]);
        }
        // printf("\n");
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
            // printf("a[%d][%d] ", i, j);
            // scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    return 0;
}