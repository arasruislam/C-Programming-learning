#include <stdio.h>

int main()
{
    char n;
    scanf("%c", &n);

    if (n >= '0' && n <= '9')
    {

        printf("IS DIGIT\n");
    }
    else
    {
        printf("ALPHA\n");
        if (n >= 'a' && n <= 'z')
        {
            printf("IS SMALL\n");
        }else{
            printf("IS CAPITAL\n");
        }
    }

    return 0;
}