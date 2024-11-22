#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    while (getline(cin, str))
    {
        sort(str.begin(), str.end());

        for (int j = 0; j < str.length(); j++)
        {
            if (str[j] == ' ')
            {
                j++;
                continue;
            }
            cout << str[j];
        }
        cout << endl;
    }
    return 0;
}