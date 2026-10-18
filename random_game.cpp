#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;

int main()
{
    while(1)
    {
        int gressNumber, randomNumber;

        cout<<"Enter Your between 1 to 5: ";
        cin>>gressNumber;

        randomNumber = rand()%5 +1;


        if(gressNumber==randomNumber)
        {
            cout<<"You Have Win!"<<endl<<endl;
        }
        else
        {
            cout<<"You Have lost. try Agin!" <<endl;
            cout<<"Random Number was: " <<randomNumber<<endl<<endl;
        }
    }

    getch();
    return 0;
}
