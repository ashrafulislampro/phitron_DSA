#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    double gpa;
    char section;
};

int main()
{
    Student a, b, c;

    a.roll = 10;
    a.gpa = 4.5;
    a.section = 'A';
    // a.name = "Ashraful";
    char temp[100] = "Ashraful";
    strcpy(a.name, temp);
    cout << a.name << ", " << a.roll << ", " << a.section << ", " << a.gpa << endl;

    // input
    cin.getline(b.name, 100);
    cin >> b.roll >> b.section >> b.gpa;
    cin.ignore();
    cin.getline(c.name, 100);
    cin >> c.roll >> c.section >> c.gpa;
    // output
    cout << b.name << ", " << b.roll << ", " << b.section << ", " << b.gpa << endl;
    cout << c.name << ", " << c.roll << ", " << c.section << ", " << c.gpa << endl;
    return 0;
}