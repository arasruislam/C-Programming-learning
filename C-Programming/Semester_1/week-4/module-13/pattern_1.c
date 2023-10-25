#include <stdio.h>

int main()
{
    int n, k = 5;
    scanf("%d", &n);
    /*
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        k++;
        printf("\n");
    }
    */

    for (int i = 1; i <= n; i++)
    {
        for (int j = k; j > 0; j--)
        {
            printf("*");
        }
        k--;
        printf("\n");
        }
    return 0;
}