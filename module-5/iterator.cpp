#include <bits/stdc++.h>
using namespace std;

int main(){
    string str = "Hello";
    for(int i = 0; i < str.size(); i++){
        cout<<str[i] <<endl;
    }
    for(string:: iterator it = str.begin(); it < str.end(); it++){
        cout<<*it <<endl;
    }
    for(auto it = str.begin(); it < str.end(); it++){
        cout<<*it <<endl;
    }
    return 0;
}