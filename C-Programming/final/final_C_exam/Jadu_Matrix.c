#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    if (row != col)
    {
        printf("NO\n");
        return 0;
    }

    int a[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int flag = 1;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                if (a[i][j] != a[0][0])
                {
                    flag = 0;
                }
            }

            if (i + j == row - 1)
            {
                if (a[i][j] != a[row - 1][col - 1])
                {
                    flag = 0;
                }
            }

            if (a[i][j] != 0 && i != j && i + j != row - 1)
            {
                flag = 0;
            }
        }
    }

    if (flag == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}