#include <iostream>
using namespace std;

// Function Prototypes
// Declaring functions before the main function
void addition(int, int);
void subtraction(int, int);
void multiplication(int, int);
void division(int, int);

int main() {
    // Calling functions with two arguments
    addition(12, 12);
    subtraction(12, 65);
    multiplication(12, 56);
    division(12, 12);

    return 0;
}

// Function to calculate addition
void addition(int a, int b) {
    int sum = a + b;
    cout << "Additions :" << sum << endl;
}

// Function to calculate subtraction
void subtraction(int a, int b) {
    int sub = a - b;
    cout << "Substraction :" << sub << endl;
}

// Function to calculate multiplication
void multiplication(int a, int b) {
    int multi = a * b;
    cout << "Multipication :" << multi << endl;
}

// Function to calculate division
void division(int a, int b) {
    int divs = a / b;
    cout << "Divisions :" << divs << endl;
}
