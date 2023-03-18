#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    while (a >= b) {
        int a1, a2, a3, a4;
        a1 = a / 1000 % 10;
        a2 = a / 100 % 10;
        a3 = a / 10 % 10;
        a4 = a % 10;
        if (a1 == 7 || a2 == 7 || a3 == 7 || a4 == 7)
            cout << a << endl;
        a = a - 1;
    }
    return 0;
}