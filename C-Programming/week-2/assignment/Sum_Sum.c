#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    int positiveNumber = 0;
    int negativeNumber = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] > 0)
        {
            positiveNumber = positiveNumber + arr[i];
        }
        else
        {
            negativeNumber = negativeNumber + arr[i];
        }
    }

        printf("%d %d", positiveNumber, negativeNumber);

    return 0;
}