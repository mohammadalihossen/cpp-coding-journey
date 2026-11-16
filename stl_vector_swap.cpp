#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Vector initialization
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    vector<int> v2;
    v2.push_back(10);
    v2.push_back(20);
    v2.push_back(30);

    // Printing before swapping
    cout << "Before Swapping:" << endl;
    cout << "v1: ";
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;

    cout << "v2: ";
    for (int i = 0; i < v2.size(); i++) {
        cout << v2[i] << " ";
    }
    cout << endl << endl;

    // Swapping v1 and v2
    swap(v1, v2);

    // Printing after swapping
    cout << "After Swapping:" << endl;
    cout << "v1: ";
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;

    cout << "v2: ";
    for (int i = 0; i < v2.size(); i++) {
        cout << v2[i] << " ";
    }
    cout << endl;

    return 0;
}
