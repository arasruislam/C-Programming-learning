#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int firstDigit = a % 10;
    int secondDigit = a / 10;
    if (firstDigit % secondDigit == 0 || secondDigit % firstDigit == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}