#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{

    int test;
    cin >> test;
    queue<string> qu;

    while (test--)
    {

        int q;
        cin >> q;
        if (q == 0)
        {
            string name;
            cin >> name;
            qu.push(name);
        }
        else
        {
            if (qu.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                cout << qu.front() << endl;
                qu.pop();
            }
        }
    }

    return 0;
}