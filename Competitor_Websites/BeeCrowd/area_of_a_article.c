#include <stdio.h>

int main()
{
    double r;
    double pi = 3.14159;
    scanf("%lf", &r);

    double calculate_value = pi * r * r;
    printf("A = %.4lf\n", calculate_value);

    return 0;
}