#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

class information {
public:
    string name;
    int id;
    string dept;
    string section;
};

int main() {
    information student1;
    student1.name = "Sumon";
    student1.id = 101;
    student1.dept = "CSE";
    student1.section = "C";

    information student2;
    student2.name = "Tamim";
    student2.id = 102;
    student2.dept = "CSE";
    student2.section = "A";

    cout << "Name: " << student1.name << endl;
    cout << "ID: " << student1.id << endl;
    cout << "Department: " << student1.dept << endl;
    cout << "Section: " << student1.section << endl;

    cout << endl;

    cout << "Name: " << student2.name << endl;
    cout << "ID: " << student2.id << endl;
    cout << "Department: " << student2.dept << endl;
    cout << "Section: " << student2.section << endl;

    getch();
    return 0;
}
