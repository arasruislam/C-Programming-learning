#include <stdio.h>

int main()
{
    char x;
    scanf("%c", &x);
    if (x>= 97 && x<=122)
    {
        int ans = x - 32;
        printf("%c", ans);
    }else{
        int ans = x + 32;
        printf("%c", ans);
    }
    
    return 0;
}