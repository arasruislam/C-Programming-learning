#include <iostream>
#include <queue>

using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> prq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        prq.push(value);
    }

    // input queries
    int q;
    cin >> q;
    while (q--)
    {
        int cmd;
        cin >> cmd;

        if (cmd == 0)
        {
            int secondCmd;
            cin >> secondCmd;
            prq.push(secondCmd);

            // print top value;
            cout << prq.top() << endl;
        }
        else if (cmd == 1)
        {
            if (prq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << prq.top() << endl;
            }
        }
        else if (cmd == 2)
        {
            if (prq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                prq.pop();
                if (prq.empty())
                {
                    cout << "Empty" << endl;
                }
                else
                {
                    cout << prq.top() << endl;
                }
            }
        }
    }

    return 0;
}