#include <stdio.h>

int main()
{
    int m;
    scanf("%d", &m);
    int n;
    int max = 0;
    for (int i = 0; i <= m; i++)
    {
        scanf("%d", &n);
        if (n > max)
        {
            max = n;
        }
    }
    printf("%d", max);
    return 0;
}