#include <bits/stdc++.h>
using namespace std;

int main(){
    string str, word;
    getline(cin, str);
    cin>>word;
    int count = 0;
    int pos = str.find(word);
    while(pos != string::npos){
        pos = str.find(word ,pos+1);
        count++;
    }
    cout<<count<<endl;
    return 0;
}