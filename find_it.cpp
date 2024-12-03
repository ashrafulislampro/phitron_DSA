#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str, word = "Jessica";
    getline(cin, str);

    stringstream ss(str);
    string temp_word;

    while (ss >> temp_word)
    {
        if (temp_word == word)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}