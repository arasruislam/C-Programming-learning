#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int arr[a];

    /*
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);

    }
    int cnt[7] = {0};
    for (int i = 0; i < a; i++)
    {
        cnt[arr[i]]++;
    }
    */

    //! Less code
    int cnt[7] = {0};

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
        cnt[arr[i]]++;
    }

    printf("0 - %d\n", cnt[0]);

    return 0;
}