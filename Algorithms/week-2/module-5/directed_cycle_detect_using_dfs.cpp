#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int N = 1e5 + 5;
bool vis[N];
bool pathVisit[N];
vector<int> adj[N];
bool answer;

void dfs(int parent)
{
    vis[parent] = true;
    // cout << parent << endl;
    pathVisit[parent] = true;

    for (int child : adj[parent])
    {
        if (pathVisit[child])
        {
            answer = true;
        }
        if (!vis[child])
        {
            dfs(child);
        }
    }

    // kaj ses
    pathVisit[parent] = false;
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
    }

    memset(vis, false, sizeof(vis));
    memset(pathVisit, false, sizeof(pathVisit));
    answer = false;

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }
    if (answer)
    {
        cout << "Cycle Found" << endl;
    }
    else
    {
        cout << "Cycle Not Found" << endl;
    }

    return 0;
}