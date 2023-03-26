#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a[1001], max = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= n - 3; ++i) {
        int sum = a[i] + a[i + 1] + a[i + 2] + a[i + 3];
        if (sum > max)
            max = sum;
    }

    cout << max;
}