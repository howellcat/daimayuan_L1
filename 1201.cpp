#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int j = 1; j <= 100; j++) {
        for (int i = 1; i <= n; i++)
            cout << "+";
        cout << "\n";
    }
}