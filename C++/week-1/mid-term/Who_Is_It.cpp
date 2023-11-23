#include <iostream>

using namespace std;

class Student
{
public:
    int ID;
    char Name[100];
    char Section;
    int Mark;
};

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        Student A, B, C;
        cin >> A.ID >> A.Name >> A.Section >> A.Mark;
        cin >> B.ID >> B.Name >> B.Section >> B.Mark;
        cin >> C.ID >> C.Name >> C.Section >> C.Mark;

        if (A.Mark > B.Mark && A.Mark > C.Mark)
        {
            cout << A.ID << " " << A.Name << " " << A.Section << " " << A.Mark << endl;
        }
        else if (B.Mark > A.Mark && B.Mark > C.Mark)
        {
            cout << B.ID << " " << B.Name << " " << B.Section << " " << B.Mark << endl;
        }
        else if (C.Mark > A.Mark && C.Mark > B.Mark)
        {
            cout << C.ID << " " << C.Name << " " << C.Section << " " << C.Mark << endl;
        }
        else if (A.Mark == B.Mark)
        {
            if (A.ID < B.ID)
            {
                cout << A.ID << " " << A.Name << " " << A.Section << " " << A.Mark << endl;
            }
            else
            {
                cout << B.ID << " " << B.Name << " " << B.Section << " " << B.Mark << endl;
            }
        }
        else if (B.Mark == C.Mark)
        {
            if (B.ID < C.ID)
            {
                cout << B.ID << " " << B.Name << " " << B.Section << " " << B.Mark << endl;
            }
            else
            {
                cout << C.ID << " " << C.Name << " " << C.Section << " " << C.Mark << endl;
            }
        }
        else if (C.Mark == A.Mark)
        {
            if (C.ID < A.ID)
            {
                cout << C.ID << " " << C.Name << " " << C.Section << " " << C.Mark << endl;
            }
            else
            {
                cout << A.ID << " " << A.Name << " " << A.Section << " " << A.Mark << endl;
            }
        }
    }

    return 0;
}