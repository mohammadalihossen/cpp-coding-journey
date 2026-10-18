#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

void sums(int a, int b)
{
    int total = a + b;
    cout << "Print Total Number: " << total << endl;
}

void sums(int a, int b, int c)
{
    int total = a + b + c;
    cout << "Print Total Number: " << total << endl;
}

int main()
{

    sums(10, 32);
    sums(30, 32, 78);

    getch();
    return 0;
}
