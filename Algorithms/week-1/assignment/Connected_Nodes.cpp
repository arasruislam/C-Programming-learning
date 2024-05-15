#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> v[1000];
    while (e--)
    {
        int a, b;
        cin >> a >> b;

        v[a].push_back(b);
        v[b].push_back(a);
    }

    int query;
    cin >> query;

    while (query--)
    {
        int x;
        cin >> x;

        sort(v[x].begin(), v[x].end(), greater<int>());

        if (v[x].size() == 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            for (int value : v[x])
            {
                cout << value << " ";
            }
            cout << endl;
        }
    }

    return 0;
}