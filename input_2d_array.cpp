#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a[2][3];

    cout << "Enter the element for the matrix: " << endl;

    for(int row = 0; row < 2; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            cout << "[a" << row << "][" << col << "] = ";
            cin >> a[row][col];
        }
    }

    cout << "\nThe matrix is:" << endl;
    for(int row = 0; row < 2; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            cout << a[row][col] << " ";
        }
        cout << endl;
    }

    getch();
    return 0;
}
