#include <stdio.h>
#include <string.h>

int main()
{

    int T;
    scanf("%d", &T);
    int i = 0;
    while (i < T)
    {
        char S[10001];
        scanf("%s", S);

        int smallDigit = 0;
        int digitCount = 0;
        int capitalDigit = 0;
        for (int j = 0; S[j] != '\0'; j++)
        {
            if (S[j] <= 'z' && S[j] >= 'a')
            {
                smallDigit++;
            }
            else if (S[j] >= '0' && S[j] <= '9')
            {
                digitCount++;
            }
            else if (S[j] <= 'Z' && S[j] >= 'A')
            {
                capitalDigit++;
            }
        }
        printf("%d %d %d\n", capitalDigit, smallDigit, digitCount);
        i++;
    }
    
    return 0;
}