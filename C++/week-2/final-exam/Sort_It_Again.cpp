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
    int math_marks;
    int eng_marks;
};

int main()
{
    int n;
    cin >> n;
    student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].studentId >> a[i].math_marks >> a[i].eng_marks;
    }

    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            if (a[i].eng_marks < a[j].eng_marks)
            {
                swap(a[i], a[j]);
            }
            if (a[i].eng_marks == a[j].eng_marks)
            {
                if (a[i].math_marks < a[j].math_marks)
                {
                    swap(a[i], a[j]);
                }

                if (a[i].math_marks == a[j].math_marks)
                {
                    if (a[i].studentId > a[j].studentId)
                    {
                        swap(a[i], a[j]);
                    }
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout
            << a[i].name << " " << a[i].cls << " " << a[i].section << " " << a[i].studentId << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
    }

    return 0;
}