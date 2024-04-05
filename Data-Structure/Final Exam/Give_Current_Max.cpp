#include <iostream>
#include <queue>

using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks)
    {
        this->marks = marks;
        this->roll = roll;
        this->name = name;
    }
};

class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks < b.marks)
            return true;
        else if (a.marks > b.marks)
            return false;
        else
        {
            if (a.roll > b.roll)
                return true;
            else
                return false;
        }
    }
};

int main()
{
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, cmp> prq;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        prq.push(obj);
    }

    // take queries
    int q;
    cin >> q;
    while (q--)
    {
        int cmd;
        cin >> cmd;

        if (cmd == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            Student obj(name, roll, marks);
            prq.push(obj);

            cout << prq.top().name << " " << prq.top().roll << " " << prq.top().marks << endl;
        }
        else if (cmd == 1)
        {
            if (prq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << prq.top().name << " " << prq.top().roll << " " << prq.top().marks << endl;
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
                    cout << prq.top().name << " " << prq.top().roll << " " << prq.top().marks << endl;
                }
            }
        }
    }

    return 0;
}