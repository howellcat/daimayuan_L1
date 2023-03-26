#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, sum = 1, a[21] = {0, 0};
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += a[i - 1];
        a[i + 1] = sum;
    }
    cout << sum;
}