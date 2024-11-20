#include <bits/stdc++.h>
using namespace std;
class Empty
{
};
class Student
{
public:
    int roll;
    string name;
    double gpa;
    Student(int roll, string name, double gpa)
    {
        this->roll = roll;
        this->name = name;
        this->gpa = gpa;
    }
    void display()
    {
        cout << name << " " << roll << " " << gpa << endl;
    }
};

Student **fun()
{
    Empty e1;
    cout << sizeof(e1) << endl;
    Student *obj = new Student(12, "Ashraul", 4.28);
    Student **ash = &obj;
    return ash;
}

int main()
{
    Student **ash = fun();
    (**ash).display();
    return 0;
}