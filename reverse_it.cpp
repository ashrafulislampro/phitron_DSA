#include <bits/stdc++.h>
using namespace std;
class Student{
    public: 
        string nm;
        int cls;
        char s;
        int Id;
};
int main(){
    int n;
    cin>>n;
    Student arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i].nm>>arr[i].cls>>arr[i].s>>arr[i].Id;
    }
    for(int i = 0, j = n-1; i < n / 2; i++, j--){
        char temp = arr[i].s;
        arr[i].s = arr[j].s;
        arr[j].s = temp;
    }
    for(int i = 0; i < n; i++){
        cout<<arr[i].nm<<" "<<arr[i].cls<<" "<<arr[i].s<< " "<<arr[i].Id<<endl;
    }
    return 0;
}