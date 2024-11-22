#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    bool isTrue = true;
    for(int i = 0, j = n -1; i < n / 2; j--, i++){
        int temp1 = arr[i];
        int temp2 = arr[j];
        if(temp1 != temp2){
            isTrue = false;
            break;
        }
    }
    cout<<(isTrue ? "YES": "NO")<<endl;
    return 0;
}