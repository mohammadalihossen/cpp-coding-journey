#include <iostream>
#include <vector>
#include <conio.h>
using namespace std;

int main()
{
    vector<int> vite = {10, 23, 32, 32};

    cout << "All Vectors: ";
    for (int x : vite)
    {
        cout << x << " ";
    }
    cout << endl;

    getch();
    return 0;
}
