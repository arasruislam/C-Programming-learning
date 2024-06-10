#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, ans, ai, aj;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ans = INT_MIN;

        int i = 0, j = n - 1;
        while (i < j)
        {
            if (min(a[i], a[j]) > ans)
            {
                ans = min(a[i], a[j]);
                ai = i;
                aj = j;
            }

            if (a[i] < a[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }

        cout << ai << " " << aj << endl;
    }

    return 0;
}