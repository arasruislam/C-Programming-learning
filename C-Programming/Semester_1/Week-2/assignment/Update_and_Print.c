#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int A[n];

        for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    int x, v;
    scanf("%d %d", &x, &v);
    for (int i = n - 1; i >= 1; i--)
    {
        A[x] = v;

        printf("%d ", A[i]);
    }

    return 0;
}