#include <iostream>
#include <cstring>

using namespace std;
int n;
const int N = 1e5 + 5;
int dp[N];

bool getValue(int currentValue)
{
    if (currentValue == n)
    {
        return true;
    }
    if (currentValue > n)
    {
        return false;
    }
    if (dp[currentValue] != -1)
    {
        return dp[currentValue];
    }

    bool op1 = getValue(currentValue + 3);
    bool op2 = getValue(currentValue * 2);

    return dp[currentValue] = op1 || op2;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        cin >> n;
        memset(dp, -1, sizeof(dp));
        if (getValue(1))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}