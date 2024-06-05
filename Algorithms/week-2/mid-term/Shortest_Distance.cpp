#include <iostream>
#include <climits>
#define ll long long int
using namespace std;

const ll INF = INT_MAX;

int main()
{
    ll n, e;
    cin >> n >> e;
    ll adj[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            adj[i][j] = INF;
            if (i == j)
                adj[i][j] = 0;
        }
    }

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        a--;
        b--;
        if (adj[a][b] > c)
        {
            adj[a][b] = c;
        }
    }

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (adj[i][k] != INF && adj[k][j] != INF && adj[i][k] + adj[k][j] < adj[i][j])
                {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int src, des;
        cin >> src >> des;
        src--;
        des--;

        if (adj[src][des] == INF)
        {
            cout << "Not Possible" << endl;
        }
        else
        {
            cout << adj[src][des] << endl;
        }
    }
    return 0;
}