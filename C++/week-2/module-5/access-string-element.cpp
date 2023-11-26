#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main()
{
    string a;
    cin >> a;

    // get any string element of the string using index value.
    cout << a[0] << endl;
    cout << a.at(5) << endl;

    // get the first element of the string.
    cout << a.front()<< endl;

    // get the last element of a string.
    cout << a.back()<<endl;
    cout << a[a.size()-1];

    return 0;
}