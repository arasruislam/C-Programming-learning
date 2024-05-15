#include <iostream>
#include <queue>
#include <utility>
#include <vector>

using namespace std;

int n, m;
char map[1001][1001];
bool vis[1001][1001];

pair<int, int> a, b;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m || map[i][j] == '#' || vis[i][j])
        return false;
    return true;
}

void bfs()
{
    queue<pair<int, int>> q;
    q.push(a);
    vis[a.first][a.second] = true;

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();

        if (par == b)
        {
            cout << "YES" << endl;
            return;
        }

        for (int i = 0; i < 4; i++)
        {
            int ci = par.first + d[i].first;
            int cj = par.second + d[i].second;
            if (valid(ci, cj) == true && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
            }
        }
        }
    cout << "NO" << endl;
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> map[i][j];

            if (map[i][j] == 'A')
            {
                a = {i, j};
            }
            else if (map[i][j] == 'B')
            {
                b = {i, j};
            }
        }
    }

    bfs();

    return 0;
}