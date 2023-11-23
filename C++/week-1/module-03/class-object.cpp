#include <iostream>
#include <string.h>
#include <string>

using namespace std;

class student
{
public:
    char name[100];
    int roll;
    double cGPA;
};

int main()
{
    student a, b;
    /*
    a.roll = 1225;
    a.cGPA = 3.94;
    ! a.name = "Ashraful" -> not possible | only possible in initialize time.
    char temp[100] = "Ash";
    strcpy(a.name, temp);
    */
    cin.getline(a.name, 100);
    cin >> a.roll >> a.cGPA;
    getchar();
    cin.getline(b.name, 100);
    cin >> b.roll >> b.cGPA;

    // see the output
    cout << a.name << " Roll:-" << a.roll << " cGPA:-" << a.cGPA << endl;

    cout << b.name << " Roll:-" << b.roll << " cGPA:-" << b.cGPA << endl;

    return 0;
}