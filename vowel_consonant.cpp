#include<iostream>
#include<conio.h>
using namespace std;

int main() {
    char ch;
    cout << "Enter any Letter: ";
    cin >> ch;

    ch = tolower(ch);

    switch(ch) {
        case 'a':
            cout << "Vowel";
            break;
        case 'e':
            cout << "Vowel";
            break;
        case 'i':
            cout << "Vowel";
            break;
        case 'o':
            cout << "Vowel";
            break;
        case 'u':
            cout << "Vowel";
            break;
        case 6:
            cout << "Thursday";
            break;
        default:
            cout << "Consonant!";
    }

    getch();
    return 0;
}
