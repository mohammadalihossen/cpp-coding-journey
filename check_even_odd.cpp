#include<iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter Any Number: ";
    cin >> num;

    // If the remainder is 0 when divided by 2, it is Even, otherwise Odd
    if (num % 2 == 0) {
        cout << num << " is an Even Number";
    } 
    else {
        cout << num << " is an Odd Number";
    }

    return 0;
}
