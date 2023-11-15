#include <stdio.h>

int main()
{
    int n, s, k, temp;
    scanf("%d %d %d", &n);

    if (n % 2 == 0)
    {
        return 0;
    }

    temp = n;
    n = 6 + (n/2);
    k = 1;
    s = n - 1;
    

    for (int i = 1; i <= n; i++)
    {
        // printing space.
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }

        s--;
        k+=2;
        printf("\n");
    }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= temp; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    
    return 0;
}