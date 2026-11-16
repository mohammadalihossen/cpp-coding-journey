#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    vector<int>::iterator info;

    info = v.begin() + 3;
    cout << "Direct value (v.begin() + 3): " << *info << endl;


    cout << "All values using loop: ";
    for (info = v.begin(); info != v.end(); info++) {
        cout << *info << " ";
    }
    cout << endl;

    getch();
    return 0;
}
