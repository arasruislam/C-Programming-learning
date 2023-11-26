#include <iostream>
#include <string>

using namespace std;
int main(){
    string s = "hello world"; // 1

    string b("hello world"); // 2

    string c("hello world", 4); // 3 (output)-> hell

    string d = "hello world";
    string m(d, 4); // 4  (output)-> o world

    string s(7, 'A'); // 5  (output)-> AAAAAAA

    return 0;
}