#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int mark;

    cout << "Enter Your Mark: ";
    cin >> mark;

    if (mark > 32) {

        if (mark >= 80) {
            cout << "Your Grade: A+" << endl;
        }
        else if (mark >= 70) {
            cout << "Your Grade: A" << endl;
        }
        else if (mark >= 60) {
            cout << "Your Grade: A-" << endl;
        }
        else if (mark >= 50) {
            cout << "Your Grade: B" << endl;
        }
        else if (mark >= 40) {
            cout << "Your Grade: C" << endl;
        }
        else if (mark >= 33) {
            cout << "Your Grade: D" << endl;
        }

    }
    else {
        cout << "Result: Fail" << endl;
    }


    getch();
    return 0;
}
