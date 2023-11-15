#include <stdio.h>

int main()
{
    int test_case;
    scanf("%d", &test_case);
    for (int i = 1; i <=test_case; i++)
    {
        long long int m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        long long int threeMultiValue = a*b*c;

        long long int missingNumber= m / threeMultiValue;

        long long int totalMulti = missingNumber * threeMultiValue;

        if (totalMulti == m)
        {
            printf("%lld", missingNumber);
        }
        else{
            printf("-1");
        }

        printf("\n");
        
    }
    
    return 0;
}