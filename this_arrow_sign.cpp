#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        (*this).cls = cls;
        this->gpa = gpa;
    }
    void display()
    {
        cout << roll << " " << cls << " " << gpa << endl;
    }
};
int main()
{
    // Student a;
    Student a(55, 5, 4.5);
    // cin >> a.roll >> a.cls >> a.gpa;
    a.display();
    return 0;
}