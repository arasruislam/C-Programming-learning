#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    if (n != m)
    {
        cout << "NO" << endl;
        return 0;
    }

    stack<int> s;
    queue<int> q;

    while (n--)
    {
        int x;
        cin >> x;
        s.push(x);
    }
    while (m--)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    while(!s.empty() && !q.empty()){
        if (s.top()!=q.front())
        {
            cout<<"NO"<<endl;
            return 0;
        }
        s.pop();
        q.pop();
    }
    if (s.empty())
    {
        cout<<"YES"<<endl;
    }
    

    return 0;
}