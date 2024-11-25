#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int ID;
    char name[100];
    char section;
    double marks;

    void display()
    {
        cout << ID << " " << name << " " << section << " " << marks << endl;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Student a;
        Student b;
        Student c;

        cin >> a.ID >> a.name >> a.section >> a.marks;
        cin >> b.ID >> b.name >> b.section >> b.marks;
        cin >> c.ID >> c.name >> c.section >> c.marks;

        if ((a.marks > b.marks) && (a.marks > c.marks))
        {
            a.display();
        }
        
        else if ((b.marks > a.marks) && (b.marks > c.marks))
        {
            b.display();
        }else if ((c.marks > a.marks) && (c.marks > b.marks))
        {
            c.display();
        }
        else if ((a.marks == b.marks && a.ID < b.ID) || (a.marks == c.marks && a.ID < c.ID))
        {
            a.display();
        }
        else if ((b.marks == a.marks && b.ID < a.ID) || (b.marks == c.marks && b.ID < c.ID))
        {
            b.display();
        }else{
            c.display();
        }
        
    }
    return 0;
}