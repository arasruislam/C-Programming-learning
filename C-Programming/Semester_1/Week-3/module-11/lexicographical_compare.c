// string compare by character
#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);

    /*
    ! using logic apply.
    int i = 0;
    while (1)
    {
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("equal\n");
            break;
        }
        else if (a[i] == '\0')
        {
            printf("A small\n");
            break;
        }
        else if (b[i] == '\0')
        {
            printf("B small\n");
            break;
        }

        if (a[i] == b[i])
        {
            i++;
        }
        else if (a[i] < b[i])
        {
            printf("A small\n");
            break;
        }
        else
        {
            printf("B small\n");
            break;
        }
    }

    */

    // Using Built-in function strcmp();
    int v = strcmp(a, b);

    if (v < 0)
    {
        printf("A smaller\n");
    }
    else if (v > 0)
    {
        printf("B smaller\n");
    }
    else
    {
        printf("Both Equal");
    }

    return 0;
}