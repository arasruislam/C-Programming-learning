#include <stdio.h>
#include <math.h>

int main()
{
    float a, b;
    scanf("%f %f", &a, &b);

    // int value = ceil(a);
    // int value = floor(a);
    // int value = round(a);
    // float value = sqrt(a);
    float value = pow(a, b);

    printf("%0.2f", value);
    return 0;
}