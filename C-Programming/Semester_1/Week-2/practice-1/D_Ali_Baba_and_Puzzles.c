#include <stdio.h>

int main()
{
    int a, b, c;
    long long int d;
    scanf("%d %d %d %lld", &a, &b, &c, &d);

    int value_1 = a + b * c;
    int value_2 = a * b + c;
    int value_3 = a - b * c;
    int value_4 = a * b - c;
    int value_5 = a + b - c;
    int value_6 = a - b + c;

    if (value_1 == d || value_2 == d || value_3 == d || value_4 == d || value_5 == d || value_6 == d)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}