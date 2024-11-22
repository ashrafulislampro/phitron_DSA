#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int ID;
    char name[100];
    char section;
    double total_marks;

    void display()
    {
        cout << ID << " " << name << " " << section << " " << total_marks << endl;
    }
};
bool compare(const Student &a, const Student &b)
{
    

    if (a.total_marks != b.total_marks)
    {
        return a.total_marks > b.total_marks;
    }   
   
    return a.ID < b.ID;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Student a;
        Student b;
        Student c;

        cin >> a.ID >> a.name >> a.section >> a.total_marks;
        cin >> b.ID >> b.name >> b.section >> b.total_marks;
        cin >> c.ID >> c.name >> c.section >> c.total_marks;

        vector<Student> students = {a, b, c};
        sort(students.begin(), students.end(), compare);

        students[0].display();
    }
    return 0;
}