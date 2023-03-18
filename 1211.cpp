#include <bits/stdc++.h>

using namespace std;

int main() {
    int c, k;
    cin >> k >> c;
    for (int i = 1; i <= k; i++) {
        for (int j = 1; j <= c; j++)
            cout << j + c * (i - 1) << " ";
        cout << "\n";
    }
}
