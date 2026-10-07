#include<iostream>
#include<conio.h>
using namespace std;
main()
{

    int n,i,fact=1;

    cout<<"Enter any positive number: ";
    cin>>n;

    for(i=1; i<=n; i++)
    {
        fact = fact * i;

    }

    cout<<fact;

    getch();
    return 0;

}
