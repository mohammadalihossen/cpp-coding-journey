#include <iostream>
using namespace std;

int globalVar = 100;

void display() {
    cout << "Global in display: " << globalVar << endl;
}

int main() {
    int localVar = 50;

    cout << "Local Variable: " << localVar << endl;
    cout << "Global Variable: " << globalVar << endl;

    display();
    return 0;
}
