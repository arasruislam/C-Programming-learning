#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int m = n - 1, k = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        k += 2;
        m--;
        printf("\n");
    }
    for (int i = 1; i <= n; i++)

        return 0;
}