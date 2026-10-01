#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Enter Three Numbers: ";
    cin >> num1 >> num2 >> num3;


    if (num1 >= num2 && num1 >= num3)
    {
        cout << "Largest Number is Number-01: " << num1 << endl;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        cout << "Largest Number is Number-02: " << num2 << endl;
    }
    else
    {
        cout << "Largest Number is Number-03: " << num3 << endl;
    }


    getch();
    return 0;
}
