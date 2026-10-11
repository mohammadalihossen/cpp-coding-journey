#include <iostream>
using namespace std;

int main() {
    int marks[4];

    marks[0] = 85;
    marks[1] = 90;
    marks[2] = 78;
    marks[3] = 92;

    for(int i = 0; i < 4; i++) {
        cout << "Marks is: " << marks[i] << endl;
    }

    return 0;
}
