#include <iostream>

using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;
    int factorial = fact(n - 1);
    return factorial * n;
}

int main()
{
    int n;
    cin >> n;
    cout << fact(n) << endl;

    return 0;
}