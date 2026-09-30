#include <iostream>

using namespace std;

int main()
{
    char ch;

    cout << "Enter any letter: ";
    cin >> ch;

    // Check for both lowercase and uppercase vowels
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        cout << "Vowel!";
    }
    else
    {
        cout << "Consonant!";
    }

    cout << endl;
    return 0;
}
