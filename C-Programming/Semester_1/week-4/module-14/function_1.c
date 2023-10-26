// return + parameter
#include <stdio.h>

int sum(int a, int b){
    int sum = a + b;
    return sum;
}

int main()
{
    int value = sum(10, 20);
    printf("%d", value);
    return 0;
}