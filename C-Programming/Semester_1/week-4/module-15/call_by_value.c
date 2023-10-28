#include <stdio.h>

void fun(int x)
{
    x = 100;
    // printf("fun X ar address - %p\n", &x);
}

int main()
{
    int x = 10;
    // printf("main X ar address - %p\n", &x);
    fun(x);
    printf("main ar X ar value - %d\n", x);

    x = 200;
    return 0;
}