#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a[1001];
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i - 1];
    for (int i = 1; i <= n / 2; i++)
        if (a[i - 1] != a[n - i]) {
            cout << 0;
            return 0;
        }
    cout << 1;
}