#include <iostream>

using namespace std;
class student
{
public:
    int roll;
    int cls;
    double gpa;

    //! way 1
    // student(int r, int c, double g)
    // {
    //     roll = r;
    //     cls = c;
    //     gpa = g;
    // }

    //! way 2 : using (*this)
    // student(int roll, int cls, double gpa)
    // {
    //     (*this).roll = roll;
    //     (*this).cls = cls;
    //     (*this).gpa = gpa;
    // }
    
    //! way 3 : using instead of (*this) => [this->]
    student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

int main()
{
    //! for way 1
    // student ashraful(1225, 9, 3.68);
    // cout << ashraful.cls << " " << ashraful.roll << " " << ashraful.gpa;

    // //! for way 2
    // student tuhin(1019, 10, 3.78);
    // cout << tuhin.cls << " " << tuhin.roll << " " << tuhin.gpa;

    //! for way 2
    student sahab(1342, 10, 4.78);
    cout << sahab.cls << " " << sahab.roll << " " << sahab.gpa;

    return 0;
}