#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1, sum = 2 * n - 1, d = 0; i <= n; i++) {
        for (int j = 1; j <= d; j++)
            cout << " ";
        for (int k = 1; k <= sum; k++)
            cout << "+";
        cout << "\n";
        sum -= 2;
        d++;
    }
}
