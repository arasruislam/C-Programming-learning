#include <stdio.h>

void numberCall(int i)
{
    printf("%d\n", i);
    if (i < 5)
    {
        numberCall(i + 1);
    }
    return;
}

int main()
{
    numberCall(1);
    return 0;
}