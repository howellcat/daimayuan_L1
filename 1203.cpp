#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a;
    cin >> n >> a;
    for (int j = 1; j <= n; j++) {
        for (int i = 1; i <= a; i++) {
            if (i % 2 == 0)
                cout << ".";
            else
                cout << "+";
        }
        cout << "\n";
    }
}