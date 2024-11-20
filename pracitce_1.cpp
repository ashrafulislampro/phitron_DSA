#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    char section;
    double math_marks;
    int cls;
    Student(string name, int roll, int cls, char section, double math_marks)
    {
        this->name = name;
        this->roll = roll;
        this->cls = cls;
        this->section = section;
        this->math_marks = math_marks;
    }
    void display()
    {
        cout << name << " = " << math_marks << endl;
    }
};
int main()
{
    Student karim("Karim", 2, 10, 'A', 98);
    Student rahim("Rahim", 5, 10, 'A', 100);
    Student rakib("Rakib", 1, 10, 'A', 90);

    int max_marks = max(karim.math_marks, max(rahim.math_marks, rakib.math_marks));
    if (karim.math_marks > rahim.math_marks && karim.math_marks > rakib.math_marks)
    {
        karim.display();
    }
    else if (rahim.math_marks > karim.math_marks && rahim.math_marks > rakib.math_marks)
    {
        rahim.display();
    }
    else
    {
        rakib.display();
    }

    return 0;
}