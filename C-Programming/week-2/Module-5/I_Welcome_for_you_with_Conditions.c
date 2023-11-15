#include <stdio.h>

int main()
{
    /*
    Given two numbers A and B. Print "Yes" if A is greater than or equal to B. Otherwise print "No".

    ! Only one line containing two numbers A and B (0  ≤  A, B  ≤  100).
    */

    int a, b;
    scanf("%d %d", &a, &b);

    if (a >= b)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}