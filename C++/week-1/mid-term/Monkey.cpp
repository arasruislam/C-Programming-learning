#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>

using namespace std;

int main()
{
    char s[100000];

    while (cin.getline(s, 100000))
    {
        sort(s, s + strlen(s));

        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] == ' ')
            {
                continue;
            }
            else
            {
                cout << s[i];
            }
        }
        cout << endl;
    }

    return 0;
}