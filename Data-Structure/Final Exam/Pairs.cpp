#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(vector<pair<string, int>> &a, vector<pair<string, int>> &b)
{
    if (a.first == b.first)
    {
        return b.second > a.second;
    }
    else
    {
        return a.second > b.second;
    }
}

int main()
{
    vector<pair<string, int>> pr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int nbr;
        cin >> name >> nbr;
        pr.push_back({name, nbr});
    }

    sort(pr.begin(), pr.end(), compare);

    for (auto &p : pr)
    {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}