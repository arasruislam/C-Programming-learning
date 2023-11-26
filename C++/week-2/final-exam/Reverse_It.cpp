#include <iostream>
#include <string>
#include <utility>

using namespace std;

class student
{
public:
    string name;
    int cls;
    char section;
    int studentId;
};

int main()
{
    int n;
    cin >> n;
    student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].studentId;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(a[i].section, a[j].section);
                }
        cout
            << a[i].name << " " << a[i].cls << " " << a[i].section << " " << a[i].studentId << endl;
    }
    return 0;
}