#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    cout << n << " ";
    for (; n != 1;)
        if (n % 2 == 0) {
            n = n / 2;
            cout << n << " ";
        } else {
            n = n * 3 + 1;
            cout << n << " ";
        }
    return 0;
}