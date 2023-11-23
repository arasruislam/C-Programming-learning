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

int main()
{
    student *rahim = new student(322, 9, 4.89);
    cout << rahim->roll << " " << rahim->cls << " " << rahim->gpa;

    return 0;
}