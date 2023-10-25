#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    int i = 0;
    while (i < t)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        int x;
        scanf("%d", &x);
        int isAvailable = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == x)
            {
                isAvailable = 1;
            }
        }
        if (isAvailable > 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

        i++;
    }
    return 0;
}