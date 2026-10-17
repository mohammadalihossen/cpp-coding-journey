#include <iostream>
using namespace std;

int additions(int, int);

int main()
{
    int sumations = additions(19, 13);
    cout << "Sum : " << sumations << endl;

    return 0;
}

int additions(int a, int b)
{
    int sum = a + b;
    return sum;

}
