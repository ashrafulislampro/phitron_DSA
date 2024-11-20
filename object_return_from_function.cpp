#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
        int roll;
        string name;
        double gpa;
        Student(int roll, string name, double gpa){
            this->roll = roll;
            this->name = name;
            this->gpa = gpa;
        }
        void display(){
            cout<<name<<" "<<roll<<" "<<gpa<<endl;
        }
};

Student fun(){
    Student obj(12, "Ashraul", 4.28);
    return obj;
}

int main(){
    Student ash = fun();
    ash.display();
    return 0;
}