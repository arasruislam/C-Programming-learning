#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

const int N = 1e5 + 5;
vector<pair<int, int>> v[N];
int dis[N];

class cmp
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        return a.first > b.first;
    }
};

void dijkstra(int src)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
    pq.push({0, src});
    dis[src] = 0;

    while (!pq.empty())
    {
        pair<int, int> parent = pq.top();
        pq.pop();
        int cost = parent.first;
        int node = parent.second;

        if (cost > dis[node])
            continue;

        for(pair<int,int> child:v[node]){
            int childNode = child.first;
            int childCost = child.second;
            if (cost + childCost < dis[childNode])
            {
                dis[childNode] = cost + childCost;
                pq.push({dis[childNode], childNode});
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
    }

    int src;
    cin >> src;
    for (int i = 1; i <= n; i++)
    {
        dis[i] = INT_MAX;
    }

    dijkstra(src);

    int t;
    cin >> t;
    while (t--)
    {
        int d, dw;
        cin >> d >> dw;

        if (dis[d] <= dw)
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