#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{

    string s;
    getline(cin, s);
    stringstream ss(s);

    string word;
    int flag = 0;
    while (ss >> word)
    {
        if (word != "Jessica")
        {

            flag = 0;
        }
        else
        {

            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}