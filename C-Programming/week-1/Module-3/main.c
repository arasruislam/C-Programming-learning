// ! Module 3 : Loop

#include <stdio.h>

int main()
{
    /*
    ? Loop & Break,Continue Statement

    ! 1 : for loop
    int i;
    for(i=1; i<=14; i= i + 2){
        printf("hello\n");
    }

    ! 2 : value print
    int i;
    for(i=2; i<=20; i+=2){
        printf("%d\n",i);
    }

    ! 3 : value print
    int i;
    for(i=0; i<=20; i= i + 5){
        printf("%d\n",i);
    }

    ! 4 : value print
    int i;
    for(i=10; i >= 1; i = i - 1){
        printf("%d\n",i);
    }

    ! 5 : sum using loop
    int sum = 0;
    int i;

    for(i=1; i<=10; i= i + 1){
        sum+=i;
        //printf("%d\n", sum);
    }
    printf("%d\n", sum);

    ! 6 : take input from user
    int sum = 0;
    int i;
    int n;
    scanf("%d", &n);
    for (i = 1; i <= n; i = i + 1)
    {
        sum += i;
        // printf("%d\n", sum);
    }
    printf("%d\n", sum);

    ! 7 : take 9 digit input and 16 digit output.
    long long int sum = 0;
    int i;
    int n;
    scanf("%d", &n);
    for (i = 1; i <= n; i = i + 1)
    {
        sum += i;
        // printf("%d\n", sum);
    }
    printf("%lld\n", sum);

    ! 8 : loop with condition apply (get odd & even number)
    int i;
    int n;
    scanf("%d", &n);
    for(i=1; i<=n; i+=1)
    {
        if(i % 2 == 0){
            printf("%d - odd\n", i);
        }else{
            printf("%d - even\n", i);
        }
    }

    ! 9 : Break Statement with loop
    int i;
    for(i=1; i<=10; i+=1)
    {
        printf("%d\n", i);
        if (i == 5)
        {
            break;
        }
        
    }

    ! 10 : Continue statement with loop
    int i;
    for(i=1; i<=10; i+=1)
    {
        if (i == 5)
        {
            continue;
        }
        printf("%d\n", i);
    }

    ! 11 : While loop
    int i;
    i=1;
    while (i<=5){
        printf("%d\n", i);
        i = i + 1;
    }

    ! 12 : Do-While Loop
    int i;
    i=1;
    do{
        printf("%d\n", i);
        i = i + 1;
    }
    while (i>=10);
    */
    int i;
    int n;
    scanf("%d", &n);
    for (i = 1; i <= n; i += 1)
    {
        if (i % 2 == 0)
        {
            printf("%d - odd\n", i);
        }
        else
        {
            printf("%d - even\n", i);
        }
    }
    // printf("Loop Statement");
    return 0;
}