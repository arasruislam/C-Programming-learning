#include <stdio.h>

int main()
{
    int test_case;
    scanf("%d", &test_case);
    for (int i = 1; i <= test_case; i++)
    {
        int n;
        scanf("%d", &n);
        char s[n];
        scanf("%s", s);
        // printf("%s", s);

        int pathan = 0, tiger = 0;

        for (int j = 0; j < n; j++)
        {
            if (s[j] == 'T')
            {
                tiger++;
            }
            else
            {
                pathan++;
            }
        }

        if (tiger > pathan)
        {
            printf("Tiger");
        }
        else if (tiger == pathan)
        {
            printf("Draw");
        }

        else
        {
            printf("Pathaan");
        }
        printf("\n");
    }

    return 0;
}