#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, n;
    cin >> n >> a;
    for (int j = 1; j <= n; j++) {
        if (j % 3 == 0)
            for (int i = 1; i <= a; i++)
                cout << "+";
        else
            for (int i = 1; i <= a; i++) {
                if (i % 3 == 0)
                    cout << "+";
                else
                    cout << ".";
            }
        cout << "\n";
    }
}