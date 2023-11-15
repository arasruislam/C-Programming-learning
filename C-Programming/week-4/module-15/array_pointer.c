#include <stdio.h>

int main()
{
    int ar[5] = {10, 20, 30, 40, 50};

    // printf("0th index er address - %p\n", &ar[0]);
    // printf("ar array er address - %p\n", ar);
    // proved: ar == &ar[0] [are same address that's mean value will be same]

    // printf("0th index er address - %d\n", ar[0]);
    // printf("0th index er address - %d\n", *ar);
    // value same: ar[0]==*ar {proved}

    printf("1st index er address - %d\n", ar[1]);
    printf("1st index er address - %d\n", *(ar + 1));
    // value same: ar[1]== *(ar + 1)  {proved}


    // just magic and wow
    printf("%d\n", *(ar + 1));
    printf("%d\n", *(1 + ar));
    printf("%d\n", ar[1]);
    printf("%d\n", 1[ar]);

    return 0;
}