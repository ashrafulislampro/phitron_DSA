#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str, word;
        cin >> str >> word;

        int len = word.size();
        auto pos = str.find(word);
        
        while (pos != string::npos)
        {
            str.replace(pos, len, "#");
            pos = str.find(word, pos + 1);
        }
        cout << str << endl;
    }
    return 0;
}