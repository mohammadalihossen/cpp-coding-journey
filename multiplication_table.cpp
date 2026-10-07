#include<iostream>
#include<conio.h>
using namespace std;
main()
{

    int num;
    cout<<"Enter any Integer: ";
    cin>>num;
    for(int i=1; i<=10; i++)
    {
        cout<<num<<"X" <<i <<" = "<<(num*i)<<endl;
    }

    getch();
    return 0;

}
