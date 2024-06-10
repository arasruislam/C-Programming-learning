#include <iostream>

using namespace std;

const int maxN = 1000;
const int maxW = 1000;
int dp[maxN][maxW];

int knapsack(int n, int weight[], int value[], int W)
{
    if (n == 0 || W == 0)
        return 0;
    if (dp[n][W] != -1)
    {
        return dp[n][W];
    }
    if (weight[n - 1] <= W)
    {
        int op1 = knapsack(n - 1, weight, value, W - weight[n - 1]) + value[n - 1];
        int op2 = knapsack(n - 1, weight, value, W);
        return dp[n][W] = max(op1, op2);
    }
    else
    {
        int op2 = knapsack(n - 1, weight, value, W);
        return dp[n][W] = op2;
    }
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int item, cap;
        cin >> item >> cap;
        int weight[item], value[item];

        for (int i = 0; i < item; i++)
        {
            cin >> weight[i];
        }
        for (int i = 0; i < item; i++)
        {
            cin >> value[i];
        }

        for (int i = 0; i <= item; i++)
        {
            for (int j = 0; j <= cap; j++)
            {
                dp[i][j] = -1;
            }
        }
        cout << knapsack(item, weight, value, cap) << endl;
    }

    return 0;
}