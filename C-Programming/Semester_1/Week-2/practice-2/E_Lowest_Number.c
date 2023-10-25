#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    int lowestNumber;
    int lowestNumberIndex;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if (lowestNumber >= arr[i])
        {
            lowestNumber = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == lowestNumber)
        {
            lowestNumberIndex = i + 1;
            break;
        }
    }

    printf("%d %d", lowestNumber, lowestNumberIndex);

    return 0;
}