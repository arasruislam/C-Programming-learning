#include <iostream>
#include <set>

using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        set<int> s;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int value;
            cin >> value;
            s.insert(value);
        }
        for (auto it = s.begin(); it != s.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }

    return 0;
}