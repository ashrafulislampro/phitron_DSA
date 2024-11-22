#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        int result = INT_MAX;
        int min_value = (arr[1]) - 1;

        for (int i = 2; i <= n; i++)
        {
            result = min(result, min_value + arr[i] + i);
            min_value = min(min_value, arr[i] - i);
        }
        cout << result << endl;
    }

    return 0;
}