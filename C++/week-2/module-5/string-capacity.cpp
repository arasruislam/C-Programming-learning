#include <iostream>
#include <string>
#include <string.h>

using namespace std;
int main()
{
    /*
    ? check string size and max_size
    string s = "Ashraful Islam";
    cout<< s.size()<< endl;
    cout<< s.max_size()<< endl;
    */

    /*
    ? check string capacity
    string s = "Ashraful Islam";
    s="Hi there! I am Muhammad Ashraful Islam";
    cout<< s.capacity()<< endl;
    */

    /*
    ? clear string
    string a = "Hello bangladesh";
    a.clear();
    cout<<a<<endl;
    */

    /*
    ? check the string is empty or not
    string a = "hello world";
    (a.empty() == true) ? cout << "Empty String" : cout << "Not Empty String";


    string a = "hello world";
    a.clear();
    (a.empty() == true) ? cout << "Empty String" : cout << "Not Empty String";
    */

   string b = "Hello World";
   cout << b.size() << " " << b << endl;

   b.resize(5);
   cout<< b.size() << " " << b << endl;

//    b.resize(11);
//    cout << b.size() << " " << b << endl;

   b.resize(11, 'Astro');
   cout << b.size() << " " << b << endl;

   b.resize(11, 'A');
   cout << b.size() << " " << b << endl;


   return 0;
}