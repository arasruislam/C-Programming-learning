#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <climits>

using namespace std;

const int N = 1000;
bool vis[N][N];
pair<int, int> parent[N][N];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;
char grid[N][N];
pair<int, int> start, dest;

bool valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m && grid[i][j] != '#' && !vis[i][j]);
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    parent[si][sj] = {-1, -1};

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        int a = par.first, b = par.second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ci = a + d[i].first;
            int cj = b + d[i].second;

            if (valid(ci, cj))
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                parent[ci][cj] = {a, b};
            }

            if (grid[ci][cj] == 'D')
            {
                dest = {ci, cj};
                return;
            }
        }
    }
}

void mark_path()
{
    pair<int, int> cur = dest;

    while (cur != start)
    {
        grid[cur.first][cur.second] = 'X';
        cur = parent[cur.first][cur.second];
    }

    grid[start.first][start.second] = 'X';
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];

            if (grid[i][j] == 'R')
            {
                start = {i, j};
            }
            else if (grid[i][j] == 'D')
            {
                dest = {i, j};
            }
        }
    }

    memset(vis, false, sizeof(vis));
    bfs(start.first, start.second);

    if (!vis[dest.first][dest.second])
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << grid[i][j];
            }
            cout << endl;
        }
    }
    else
    {
        mark_path();

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << grid[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}