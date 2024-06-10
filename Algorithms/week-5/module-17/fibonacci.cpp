#include <iostream>
#define ll long long int

using namespace std;

const ll N = 1e6 + 5;
ll dp[N];

ll fibo(ll n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    ll fibonacci = fibo(n - 1) + fibo(n - 2);
    dp[n] = fibonacci;
    return fibonacci;
}

int main()
{
    ll n;
    memset(dp, -1, sizeof(dp));
    cin >> n;
    cout << fibo(n) << endl;

    return 0;
}