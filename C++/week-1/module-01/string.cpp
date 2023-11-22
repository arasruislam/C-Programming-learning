#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main(){
    
    char s[200];
    int a;
    cin>> a;
    getchar();
    // fgets(s, 100, stdin);
    cin.getline(s, 100);

    cout << a << endl;
    cout << s << endl;
    return 0;
}