// #include <stdio.h>
// #include <string.h>

// int is_palindrome(char str[])
// {
//     for (int i = 0; i < strlen(str); i++)
//     {
//         printf("%s", str[i]);
//     }

// }
// int main()
// {
//     char s[1001];
//     scanf("%s", s);

//     for (int i = 0; i <= strlen(s); i++)
//     {
//         printf("%s", s[i]);
//     }
//     // is_palindrome(s);
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main()
{
    char c[1001];
    for (int i = 0; i < 1001; i++)
    {
        scanf("%c", &c[i]);
    }

    for (int i = 0; i < 1001; i++)
    {
        printf("%c\n", c[i]);
    }

    return 0;
}