#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int A[n];

    int countByTwo = 0;
    int countByThree = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);

        if (A[i] % 2 == 0 && A[i] % 3 == 0)
        {
            countByTwo++;
        }
        else if (A[i] % 2 == 0)
        {
            countByTwo++;
        }
        else if(A[i] % 3 == 0)
        {
            countByThree++;
        }
    }

    printf("%d %d", countByTwo, countByThree);

    return 0;
}