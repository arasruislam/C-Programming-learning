#include <stdio.h>

int main()
{
    int a;
    for (int a = 0; scanf("%d", &a)!= EOF; a++)
    {
        if (a == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}