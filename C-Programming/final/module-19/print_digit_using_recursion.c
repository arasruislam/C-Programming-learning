#include <stdio.h>
void fun(int n){
    // base case
    if(n == 0) return;
    int x = n% 10;
    fun(n/10);
    printf("%d ", x);
}

int main()
{
    int n;
    scanf("%d", &n);
    fun(n);
    return 0;
}