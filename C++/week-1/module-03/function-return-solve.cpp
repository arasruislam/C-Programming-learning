#include <iostream>

using namespace std;

class student
{
public:
    int roll;
    int cls;
    double gpa;

    student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

student *fun()
{
    student *rahim = new student(322, 9, 4.56);
    return rahim;
}

int main()
{
    student *ans = fun();
    cout << ans->roll << " " << ans->cls << " " << ans->gpa;
    return 0;
}