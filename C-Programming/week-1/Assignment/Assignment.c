#include <stdio.h>

int main(){

    /*
    ! Problem - 1
    Welcome to the "Panta Vat" assignment. In this task you just need to print the following lines as it is.

    Hello, world! I am learning C programming language. ^_^

    Programming is fun and challenging. /\/\/\

    I want to give my 100% dedication to learn!    I will succeed one day.

    Note: Here you will see 4 spaces in the last line which is a tab, you need to print a tab there.

    ? Solution
    printf("Hello, world! I am learning C programming language. ^_^\nProgramming is fun and challenging. /\\/\\/\\ \nI want to give my 100%% dedication to learn!\tI will succeed one day.");

    ! Problem - 2
    You will be given two integers A and B. You need to give output their multiplication. [-10^9 <= A,B <= 10^9]

    ? Solution
    long long int a, b;
    scanf("%lld %lld",&a,&b);
    long long multiply;
    multiply = a * b;
    printf("%lld", multiply);

    ! Problem - 3
    You will be given a non-negative integer N, you need to tell if this number is divisible by 3 or not. If it is divisible by 3 output "YES" otherwise output "NO" without the quotation mark. [0 <= N <= 10^9]

    ? Solution
    long long int n;
    scanf("%d",&n);

    if(n % 3 == 0){
        printf("YES");
    } else{
        printf("NO");
    }



    ! Problem - 4
    You will be given a non-negative integer N, you need to print all numbers from 1 to N that are divisible by both 3 and 7. [21 <= N <= 10000]

    ? Solution
    int n, i;
    scanf("%d", &n);

    if(n>=21 && n<=10000){
        i = 1;
        while(i<=n){
            if(i % 3 == 0 && i % 7 ==0){
               printf("%d\n", i);
            }
            i++;
        }
    }


    ! Problem - 5
    Alisa and you have gone out for shopping, and Alisa wants to buy a new pair of shoes for Eid. She has enough money to buy anything. However, Alisa will only buy shoes if you also buy a pair. And you will buy a pair of shoes if you can buy a Punjabi. That means, everything is depending on the Punjabi.

    You have decided that you will buy a Punjabi only if you have more than 1000 Taka. After purchasing the Punjabi the amount of your money will be reduced by 1000. Suppose you have 1600 taka with you, after buying the Punjabi you will have 600 taka left with you.

    Then you will only buy shoes if you have 500 Taka or more left with you. That means, if you can't buy your Punjabi you can't buy shoes.

    Now if I inform you the amount N Taka that your mother will give you, can you tell me what will happen next?

    * If you buy a punjabi print "I will buy Punjabi".

    * If you buy a pair of shoes print "I will buy new shoes"

    * If Alisa buy a pair of shoes print "Alisa will buy new shoes"

    * If no one can buy anything print "Bad luck!"

    Note: Don't forget to print new line after every line you print. [1 <= N <= 2^31]

    ? Solution
    long long int n;
    scanf("%lld", &n);

    if(n > 1000) {
        printf("I will buy Punjabi\n");

        if(n - 1000 >= 500){
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }else{
        printf("Bad luck!");
    }

    */

    return 0;
}