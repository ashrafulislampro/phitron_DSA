#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n], even = 0, odd = 0, min_operation = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr[i] % 2 == 0 ? even++ : odd++;
        }
        if (n % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            min_operation = (max(even, odd) - min(even, odd)) / 2;
            cout << min_operation << endl;
        }
        }
    return 0;
}