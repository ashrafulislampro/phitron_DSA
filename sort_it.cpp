#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    char s;
    int Id;
    int math_marks;
    int eng_marks;

    void display()
    {
        cout << nm << " " << cls << " " << s << " " << Id << " " << math_marks << " " << eng_marks << endl;
    }
};
bool cmp(Student l, Student r){
    int sum_l = l.math_marks + l.eng_marks;
    int sum_r = r.math_marks + r.eng_marks;
    return (sum_l == sum_r) ? (l.Id < r.Id) : (sum_l > sum_r);
}
int main()
{
    int n;
    cin >> n;
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].nm >> arr[i].cls >> arr[i].s >> arr[i].Id >> arr[i].math_marks >> arr[i].eng_marks;
    }
    sort(arr, arr+n, cmp);
    for (int i = 0; i < n; i++)
    {
        arr[i].display();
    }
    return 0;
}