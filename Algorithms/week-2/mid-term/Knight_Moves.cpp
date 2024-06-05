#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
using namespace std;

vector<pair<int, int>> mv = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};

bool vis[100][100];
int dis[100][100];
int n, m;

bool valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        int a = par.first, b = par.second;
        q.pop();

        for (int i = 0; i < 8; i++)
        {
            int ci = a + mv[i].first;
            int cj = b + mv[i].second;

            if (valid(ci, cj) == true && vis[ci][cj] == false)
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[a][b] + 1;
            }
        }
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        cin >> n >> m;

        int si, sj, qi, qj;
        cin >> si >> sj >> qi >> qj;

        memset(vis, false, sizeof(vis));
        memset(dis, -1, sizeof(dis));

        bfs(si, sj);

        if (dis[qi][qj] == -1)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << dis[qi][qj] << endl;
        }
    }

    return 0;
}