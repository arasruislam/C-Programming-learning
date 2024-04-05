#include <iostream>
#include <map>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int test;
    cin >> test;
    cin.ignore();
    while (test--)
    {
        string sentence;
        getline(cin, sentence);
        string word;
        stringstream value(sentence);
        map<string, int> mp;
        int maxCount = 0;
        string answer;
        while (value >> word)
        {
            mp[word]++;
            if (mp[word] > maxCount)
            {
                maxCount = mp[word];
                answer = word;
            }
        }

        cout << answer << " " << maxCount << endl;
    }

    return 0;
}
