#include <stdio.h>

int main()
{
    int n, m, k;
    scanf("%d", &n);
    m = n - 1;
    k = 1;

    for (int i = 1; i <= (2 * n); i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }

        if (i < n)
        {
            m--;
            k += 2;
        }
        else
        {
            m++;
            k -= 2;
        }
        
        if (i == n)
        {
            m--;
            k += 2;
        }
        
        printf("\n");
    }

    return 0;
}