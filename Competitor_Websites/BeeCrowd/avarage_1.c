#include <stdio.h>

int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    double average = (a * 3.5 + b * 7.5) / 11.0;
    printf("MEDIA = %lf", average);
    return 0;
}