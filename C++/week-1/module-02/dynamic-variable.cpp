#include <iostream>

using namespace std;

int * fun(){

    int *a = new int;
    cout << "Fun: " << a << endl;
    *a = 150;

    return a;
}
 
int main(){

    int *p = fun();
    cout << "Main: " << p << endl;

    // dynamic (integer) value  create
    /*
    int *a = new int;
    *a = 20;
    cout << *a << endl;
    */

    // dynamic (floating) value create
    /*
    float *n = new float;
    *n = 1.2034;
    cout << *n << endl;
    */

    return 0;
}