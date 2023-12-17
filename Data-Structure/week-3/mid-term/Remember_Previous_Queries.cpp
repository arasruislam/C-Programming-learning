#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> linkedList;
    list<int> reverseLinkedList;

    int query;
    cin >> query;

    while (query--)
    {
        int placer, value;
        cin >> placer >> value;

        if (placer == 1)
        {
            linkedList.push_back(value);
        }
        else if (placer == 0)
        {
            linkedList.push_front(value);
        }
        else if (placer == 2)
        {
            if (value == 0)
            {
                linkedList.pop_front();
            }
            else
            {
                if (value < linkedList.size())
                {
                    linkedList.erase(next(linkedList.begin(), value));
                }
            }
        }
        reverseLinkedList.assign(linkedList.begin(), linkedList.end());

        // forward print list
        cout << "L -> ";
        for (int value : linkedList)
        {
            cout << value << " ";
        }
        cout << endl;

        // reverse list
        reverseLinkedList.reverse();
        cout << "R -> ";
        for (int value : reverseLinkedList)
        {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}