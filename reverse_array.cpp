#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int roll;
        int marks;
};

int main(){
    int n;
    cin>>n;
    Student arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i].name>>arr[i].roll>>arr[i].marks;
    }
    reverse(arr, arr+n);
    for(int i = 0; i < n; i++){
        cout<<arr[i].name<<" "<<arr[i].roll<<" "<<arr[i].marks<<endl;
    }
    return 0;
}