#include <iostream>
#include <vector>
#include <climits>
using namespace std;
class Edge
{
public:
    int u, v, c;
    Edge(int u, int v, int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};
const int N = 1e5 + 5;
int dis[N];
int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> EdgeList;
    while (e--)
    {
        int u, v, c;
        cin >> u >> v >> c;
        EdgeList.push_back(Edge(u, v, c));
    }

    int src;
    cin >> src;

    for (int i = 1; i <= n; i++)
    {
        dis[i] = INT_MAX;
    }

    dis[src] = 0;

    for (int i = 1; i <= n - 1; i++)
    {
        for (Edge ed : EdgeList)
        {
            int u, v, c;
            u = ed.u;
            v = ed.v;
            c = ed.c;

            if (dis[u] != INT_MAX && dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
            }
        }
    }

    bool isNegative = false;
    for (Edge ed : EdgeList)
    {
        int u, v, c;
        u = ed.u;
        v = ed.v;
        c = ed.c;

        if (dis[u] != INT_MAX && dis[u] + c < dis[v])
        {
            isNegative = true;
            break;
        }
    }
    if (isNegative)
    {
        cout << "Negative Cycle Detected" << endl;
        return 0;
    }

    int t;
    cin >> t;
    while (t--)
    {
        int d;
        cin >> d;

        if (dis[d] == INT_MAX)
        {
            cout << "Not Possible" << endl;
        }
        else
        {
            cout << dis[d] << endl;
        }
    }

    return 0;
}