#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    int i = 0;

    while (i < t)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);
        int totalWork = m1 * d;

        int totalFarmer = m1 + m2;
        int newWorkDay = totalWork / totalFarmer;

        int fewerDayFromPrevious = d - newWorkDay;
        printf("%d\n", fewerDayFromPrevious);

        i++;
    }

    return 0;
}