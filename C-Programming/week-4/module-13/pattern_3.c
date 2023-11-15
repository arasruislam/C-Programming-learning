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
            printf("%d ", j);
        }
        k++;
        printf("\n");
    }
    */

   //! reverse way nested loop using j-value
    for (int i = 1; i <= n; i++)
    {
        for (int j = k; j >= 1; j--)
        {
            printf("%d ", j);
        }
        k--;
        printf("\n");
    }

    return 0;
}