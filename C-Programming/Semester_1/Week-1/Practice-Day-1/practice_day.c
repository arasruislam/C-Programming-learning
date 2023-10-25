#include <stdio.h>

int main()
{
    /*

    ! 1 : I know that you're loving practice days! So this task is for you. You need to print "I Love Practice" without the quotation marks. I know that you can do it!

    printf("I Love Practice");
    return 0;



    ! 2 : Take two integers A and B as input and output their summation. Input Range [-10^9 <= A,B <= 10^9]

    long long int a, b;
    scanf("%lld %lld", &a, &b);
    long long sum;
    sum = a + b;
    printf("%lld", sum);



    ! 3 : I know and you also know that you love practice day so much. So this task is for you. You will be given a positive integer N, you need to print "I Love Practice" N times. Here positive integer means those integers that are greater than 0.

    int i;
    int N;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        if (N<= 1000 && N>=1)
        {
            printf("I Love Practice\n");
        }
    }


    ! 4 : You've learned about variables, right? Now its time to practice them. You need to take an integer A, a very big integer B, a floating value C and a character D as input and output them serially.

    int A;
    long long int B;
    float C;
    char D;
    scanf("%d%lld%f %c",&A,&B,&C,&D);
    printf("%d\n%lld\n%0.2f\n%c\n",A,B,C,D);


    ! 5 :You will be given a positive integer N, you need to print from 1 to N and besides the value, print Yes or No. Print Yes if the value is divisible by 5 and print No otherwise.

    int i;
    int n;
    scanf("%d", &n);

    if (n<=1000 && n>=1)
    {
        for (i = 1; i <= n; i++)
        {
            if (i % 5 == 0)
            {
                printf("%d Yes\n", i);
            }else {
                printf("%d No\n", i);
            }

        }
    }
    */

    int i;
    int n;
    scanf("%d", &n);

    if (n <= 1000 && n >= 1)
    {
        for (i = 1; i <= n; i++)
        {
            if (i % 5 == 0)
            {
                printf("%d Yes\n", i);
            }
            else
            {
                printf("%d No\n", i);
            }
        }
    }

    return 0;
}
