#include<iostream>
#include<cstdlib>
using namespace std;

void displayArry(int num[])
{
    for(int i=0; i<5; i++)
    {
        cout<<num[i]<<" " <<endl;
    }
}

int main()
{
    int number[5] = {12, 23, 12, 23, 23};
    displayArry(number);
}
