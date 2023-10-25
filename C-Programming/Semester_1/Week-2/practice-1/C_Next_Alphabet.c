#include <stdio.h>

int main()
{
    char alpha;
    scanf("%c", &alpha);
    if (alpha == 'z')
    {
        printf("a");
    }
    else
    {
        int nextValue = alpha + 1;
        printf("%c", nextValue);
    }
    return 0;
}