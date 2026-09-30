#include<iostream>
using namespace std;

int main()
{
    int marks; 
    cout << "Enter Your Marks: ";
    cin >> marks;

    if (marks >= 33) {
        cout << "Passed the Exam!";
    } 
    else {
        cout << "Failed / Not Passed.";
    }

    return 0;
}
