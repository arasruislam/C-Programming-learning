#include <stdio.h>

int main()
{
    // int x = 100;
    // int *ptr = &x;

    // printf("X er address - %p\n", &x);
    // printf("ptr er value - %p\n", ptr);
    // printf("ptr er address - %p\n", &ptr);
    // printf("ptr er memory-size - %d\n", sizeof(ptr));

    // *ptr = 200;

    // printf("X er address - %d\n", x);
    // printf("ptr er value - %d\n", *ptr);

    double x = 2.40;
    double *ptr = &x;
    double *ptr2 = ptr;

    // *ptr = 3.40;
    *ptr2 = 100.3;

    printf("X er value - %0.2f\n", x);
    printf("ptr er value - %0.2f\n", *ptr);
    printf("ptr er value - %0.2f\n", *ptr2);

    return 0;
}