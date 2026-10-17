#include<iostream>
using namespace std;

void multiply(int a, int b)
{
    int product = a * b;
    cout << "Product : " << product << endl;
}

int main()
{
    multiply(5, 10);
    multiply(12, 4);
    multiply(25, 3);

    return 0;
}
