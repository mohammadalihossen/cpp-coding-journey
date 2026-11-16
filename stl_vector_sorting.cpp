#include <iostream>
#include <vector>
#include <algorithm> // Required for the sort() function

using namespace std;

int main() {
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(40);
    v.push_back(30);
    v.push_back(50);

    // Print the vector before sorting
    cout << "Before Sorting:" << endl;
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Sort the vector in ascending order
    sort(v.begin(), v.end());

    // Print the vector after sorting
    cout << "After Sorting:" << endl;
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
