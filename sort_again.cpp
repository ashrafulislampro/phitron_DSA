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
    // if(l.eng_marks == r.eng_marks){
    //     if(l.math_marks == r.math_marks){
    //         return l.Id < r.Id;
    //     }
    //     return l.math_marks > r.math_marks;
    // }else{
    //     return l.eng_marks > r.eng_marks;
    // }
     return (l.eng_marks == r.eng_marks) ? (l.math_marks == r.math_marks) ? (l.Id < r.Id): (l.math_marks > r.math_marks) : (l.eng_marks > r.eng_marks);
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