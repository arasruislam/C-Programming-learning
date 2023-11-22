#include <iostream>
#include <algorithm>

#include <utility>

using namespace std;

int main()
{

    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    //! get min max value
    int mn = min({a, b, c, d, e});
    int mx = max({a, b, c, d, e});

    cout << mn << " " << mx << endl;

    //! Swap two value
    // swap(a, b);
    // cout << a << " " << b;

    return 0;
}