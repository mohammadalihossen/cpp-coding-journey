
#include <iostream>
using namespace std;

int main() {
    int a;
    float f;
    double d;
    char ch;
    char name[20];

    cout << "Size of int: " << sizeof(a) << " bytes" << endl;
    cout << "Size of float: " << sizeof(f) << " bytes" << endl;
    cout << "Size of double: " << sizeof(d) << " bytes" << endl;
    cout << "Size of char: " << sizeof(ch) << " bytes" << endl;
    cout << "Size of char array (name): " << sizeof(name) << " bytes" << endl;

    return 0;
}
