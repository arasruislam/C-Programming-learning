#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // type 1
    // vector<int> v;

    // // type 2
    // vector<int> v(5);

    // // type 3
    // vector<int> v(5, 12);

    // // type 4
    // vector<int> v2(5, 9);
    // vector<int> v(v2);

    // // type 5
    // int a[6] = {1, 3, 5, 7, 9, 11};
    // vector<int> v(a, a + 6);

    // Initialize
    vector <int> v = {2, 10, 3};

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << v.size();

    return 0;
}