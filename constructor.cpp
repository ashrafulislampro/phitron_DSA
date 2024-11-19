#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    // Student(int r, int c, double g)
    // {
    //     roll = r;
    //     cls = c;
    //     gpa = g;
    // }
    void display()
    {
        cout << roll << " " << cls << " " << gpa << endl;
    }
};
int main()
{
    Student a;
    // Student a(55, 5, 4.5);
    cin >> a.roll >> a.cls >> a.gpa;
    a.display();
    return 0;
}