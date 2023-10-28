#include <stdio.h>

void fun(int *p){
    *p = 500;
    // printf("p er address - %p\n", p);
    printf("fun theke X er value - %d\n", *p);
}

int main()
{
    int x = 100;
    // printf("X er address - %p\n", &x);
    fun(&x);

    printf("main er X er value - %d\n", x);
    return 0;
}