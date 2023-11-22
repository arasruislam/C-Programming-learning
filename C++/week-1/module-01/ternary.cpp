#include <iostream>
using namespace std;

int main()
{

    int x = 10;
    // if (x == 10)
    // {
    //     cout << "This is 10";
    // }else{
    //     cout << "This is not 10";
    // }

    //! ternary operator => shortcut if-else
    // -> (condition) ? True : false;
    (x == 10) ? cout << "Good Luck" << endl : cout << "Not good luck" << endl;

    int y;
    cin >> y;
    (y%2 == 0)? cout<<"even": cout << "odd";

    return 0;
}