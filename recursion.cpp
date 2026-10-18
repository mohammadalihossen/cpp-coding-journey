#include<iostream>
#include<conio.h>
using namespace std;

int fact(int n)
{
    if(n <= 1)
        return 1;
    else
        return n * fact(n - 1); 
}

int main()
{
    int factorial = fact(4);
    cout << "Factorial of 4 is: " << factorial << endl;

    getch();
    return 0;
}
