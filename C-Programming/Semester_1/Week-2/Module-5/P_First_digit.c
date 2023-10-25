#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    int divide = x / 1000;
    if (divide % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }

    return 0;
}