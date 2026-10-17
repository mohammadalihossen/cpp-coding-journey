#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int main()
{
    for(int i = 1; i<5; i++)
    {
        int randomNumbr = rand();
        cout<< "Random Number : "<<randomNumbr <<endl;

    }

    getch();
    return 0;
}
