#include <iostream>

using namespace std;

int main() {
    int mark;

    // Get input from the user
    cout << "Enter your mark: ";
    cin >> mark;

    // Grading logic from the image
    if (mark > 100) {
        cout << "Invalid Mark";
    } else if (mark < 0) {
        cout << "Invalid Mark";
    } else if (mark >= 80) {
        cout << "A+";
    } else if (mark >= 70) {
        cout << "A";
    } else if (mark >= 60) {
        cout << "A-";
    } else if (mark >= 50) {
        cout << "B";
    } else if (mark >= 40) {
        cout << "C";
    } else if (mark >= 33) {
        cout << "D";
    } else {
        cout << "Fail";
    }

    cout << endl;
    return 0;
}
