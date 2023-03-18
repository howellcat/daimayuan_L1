#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1, d = 1; i <= 2 * n - 1; i++) {
        if (i > n) {
            for (int k = 1; k <= i - (i - n + d); k++)
                cout << "+";
        } else {
            for (int j = 1; j <= i; j++) {
                cout << "+";
            }
        }
        cout << "\n";
        if (i > n)
            d++;
    }
}
