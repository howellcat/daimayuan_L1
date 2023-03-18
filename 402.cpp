#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned int a;
    cin >> a;
    if (a <= 100) {
        if (a < 60) {
            cout << "60";
        } else {
            cout << a;
        }
    }

    return 0;
} 