#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 2; i <= n - 1; i++)
        if (n % i == 0) {
            cout << "no";
            return 0;
        }
    cout << "yes";
    return 0;
}