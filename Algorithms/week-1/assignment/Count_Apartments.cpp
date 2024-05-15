#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int n, m;
char map[1001][1001];
bool vis[1001][1001];

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m || map[i][j] == '#' || vis[i][j])
        return false;
    return true;
}

void dfs(int si, int sj)
{
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj))
        {
            dfs(ci, cj);
        }
    }
}

int countApt()
{
    int apts = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (map[i][j] == '.' && !vis[i][j])
            {
                dfs(i, j);
                apts++;
            }
        }
    }
    return apts;
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> map[i][j];
        }
    }

    memset(vis, false, sizeof(vis));
    int totalApt = countApt();

    cout << totalApt << endl;
    return 0;
}