#include <stdio.h>

//! receive array -> ar[], *ar
// array size not same

void fun(int ar[], int n){
    // int siz = sizeof(ar) / sizeof(int);
    // printf("%d\n", siz);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
}

int main()
{
    int ar[5]= {10, 20, 30, 40, 50};
    // int siz = sizeof(ar)/sizeof(int);
    // printf("%d\n", siz);
    fun(ar, 5);
    return 0;
}