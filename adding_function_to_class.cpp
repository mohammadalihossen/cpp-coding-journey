#include <iostream>
#include <conio.h>
using namespace std;

class student
{
public:
    int id;
    string name;
    string dept;
    string section;
    float gpa;

    void display()
    {
        cout << id << endl << name << endl << dept << endl << section << endl << gpa << endl;
    }
};

int main()
{
    student info, info1;

    info.id      = 232;
    info.name    = "Mohammad Ali";
    info.dept    = "CSE";
    info.section = "C";
    info.gpa     = 4.76;
    info.display();

    cout << "----------------" << endl;

    info1.id      = 233;
    info1.name    = "Monir";
    info1.dept    = "CST";
    info1.section = "C";
    info1.gpa     = 4.06;
    info1.display();

    getch();
    return 0;
}
