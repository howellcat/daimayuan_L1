#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int a = 1; a <= n; a++) {
        for (int b = 0; b <= a - 2; b++)
            cout << " ";
        for (int j = n; j >= a; j--)
            cout << "+";
        cout << "\n";
    }
}