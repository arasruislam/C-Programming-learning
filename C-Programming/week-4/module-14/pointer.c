#include <stdio.h>

int main()
{
    int x = 10;

    // int * p = &x;
    // int* p = &x;
    int *p = &x;
    printf("%p\n", p);
    return 0;
}