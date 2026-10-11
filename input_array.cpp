#include <iostream>
using namespace std;

int main()
{
    int marks[5];

    for(int i = 0; i < 5; i++)
    {
        cout << "Marks For student " << i + 1 << " = ";
        cin >> marks[i];
    }

    cout << "\n--- Displaying Marks ---\n";

    for(int i = 0; i < 5; i++)
    {
        cout << "Marks Student- " << i + 1 << ": " << marks[i] << endl;
    }

    return 0;
}
