#include <stdio.h>
#include <stdlib.h>

int main()
{
    int text_case;
    scanf("%d", &text_case);
    for (int i = 0; i < text_case; i++)
    {
        int n;
        scanf("%d", &n);
        int a[n], b[n], c[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        for (int i = 0; i < n; i++)
        {
            b[i] = a[i];
        }

        int i = 0;
        for (i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (b[i] > b[j])
                {
                    int temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            c[i] = abs(a[i] - b[i]);
        }

        for (int i = 0; i < n; i++)
        {
            printf("%d ", c[i]);
        }

        printf("\n");
    }

    return 0;
}