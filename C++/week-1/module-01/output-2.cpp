#include <iostream>

int main() 
{
    int a = 10;
    long long int b = 1000000000000;
    float c = 1.4;
    double d = 1.23232343;
    char e = 'A';

    // no need to give formate specifier in c++
    //* std::cout<< b;

    //* std::cout<<"My favorite number is " << a;

    //* std::cout << "My " << a << " favorite number is";

    // std::cout << "My " << a << " " << "favorite number is";

    // std::cout << a << "\n"
    //           << c;

    std::cout << a << std::endl
              << b << std::endl
              << c << std::endl
              << d << std::endl
              << e;

    return 0;
}