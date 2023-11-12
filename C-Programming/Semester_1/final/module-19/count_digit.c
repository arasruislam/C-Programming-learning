#include <stdio.h>

int fun(char s[], int i)
{

    if (s[i] == '\0')
        return 0;

    int answer = fun(s, i + 1);

    if (s[i] >= 'A' && s[i] <= 'Z')
    {
        s[i] = s[i] + 32;
    }

    if (s[i] == 'a' || s[i] == 'i' || s[i] == 'u' || s[i] == 'e' || s[i] == 'o')
    {
        return answer + 1;
    }
    else
    {
        return answer;
    }
}

int main()
{
    char s[205];
    fgets(s, 205, stdin);
    int count = fun(s, 0);
    printf("%d", count);
    return 0;
}