#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int a = 1; a <= n; a++) {
        for (int b = a; b <= n - 1; b++)
            cout << " ";
        for (int c = 1; c <= a; c++)
            cout << "+";
        cout << "\n";
    }
}