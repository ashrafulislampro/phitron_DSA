#include <bits/stdc++.h>
using namespace std;

bool threeNumSum(int A[], int N, int S) {
    // If there are less than 3 elements, it's impossible
    if (N < 3) return false;

    // Sort the array
    sort(A, A+N);

    // Use two-pointer approach for each element
    for (int i = 0; i < N - 2; i++) {
        int target = S - A[i];
        int left = i + 1, right = N - 1;

        while (left < right) {
            int currentSum = A[left] + A[right];
            if (currentSum == target) {
                return true;
            } else if (currentSum < target) {
                left++;
            } else {
                right--;
            }
        }
    }

    return false;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, S;
        cin >> N >> S;
        int A[N];

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        if (threeNumSum(A, N, S)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
