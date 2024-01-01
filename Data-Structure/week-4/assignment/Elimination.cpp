#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{

    int test;
    cin >> test;
    while (test--)
    {
        string value;
        cin >> value;

        stack<char> st;

        for (char c : value)
        {
            if (c == '0')
            {
                st.push(c);
            }
            else
            {
                if (!st.empty())
                {
                    if (st.top() == '0')
                    {
                        st.pop();
                    }else{
                        st.push(c);
                    }
                }else{
                    st.push(c);
                }
            }
        }
        if (st.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}