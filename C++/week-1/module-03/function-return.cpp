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

student * fun(){
    student fahim(322, 9, 4.56);
    student *p = &fahim;
    return p;
}

int main()
{
    // student ans = fun();
    student * ans = fun();
    // cout << ans.roll << " " << ans.cls<<" "<< ans.gpa;
    cout << ans->roll << " " << ans->cls << " " << ans->gpa;

    //? but this will gives garbage value. For that's why we need dynamic object.
    //? let's see in dynamic object -> dynamic-object.cpp
    //! learn how to create dynamic value.

    return 0;
}