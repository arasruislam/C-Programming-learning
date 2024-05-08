#include <iostream>
#include <vector>

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
    }

    int q;
    cin >> q;
    while (q--)
    {
        int src, des;
        cin >> src >> des;

        bool isAvailable = false;
        if(src == des){
            isAvailable = true;
        }else{
            for (int check : v[src])
            {
                if (check == des)
                {
                    isAvailable = true;
                    break;
                }
            }
        }

        if (isAvailable)
        {
            cout << "YES"<< endl;
        }
        else
        {
            cout << "NO"<< endl;
        }
    }

    return 0;
}