#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    switch (n % 2)
    {
    case 0:
        cout << "Even" <<endl;
        break;
    case 1:
        cout << "Odd" << endl;
        break;

    default:
        break;
    }

    return 0;
}