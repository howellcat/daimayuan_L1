#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n;
    m = n;
    for (int i = 2; i * i <= m; i++) {
        while (n % i == 0) {
            n /= i;
            cout << i << " ";
        }
    }
    if (n > 1)
        cout << n;
}