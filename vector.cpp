#include <iostream>
#include <vector>
#include <conio.h>
using namespace std;

int main()
{
    vector<int> vite;

    vite.push_back(10);
    vite.push_back(20);
    vite.push_back(30);
    vite.push_back(40);
    vite.push_back(50);
    vite.push_back(60);
    vite.pop_back();

    cout << "Vector All Element Print: ";
    for (int x : vite) {
        cout << x << " ";
    }
    cout << endl;

    cout << "Prothom element: " << vite.front() << endl;
    cout << "Shesh element: " << vite.back() << endl;
    cout << "Size: " << vite.size() << endl;
    cout << "Vector khali kina: " << vite.empty() << endl;

    getch();
    return 0;
}
