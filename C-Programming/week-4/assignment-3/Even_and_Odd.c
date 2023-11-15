#include <stdio.h>

void odd_even()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int size = sizeof(a) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int totalEven = 0;
    int totalOdd = 0;

    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 == 0)
        {
            totalEven++;
        }
        else
        {
            totalOdd++;
        }
    }
    printf("%d %d", totalEven, totalOdd);
    return;
}

int main()
{
    

    odd_even();

    return 0;
}