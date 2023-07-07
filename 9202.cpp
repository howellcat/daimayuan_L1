#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x, y, z;
    cin >> n;
    x = n / 100 % 10;
    y = n / 10 % 10;
    z = n % 10;
    int a, b, c;
    a = x % 2 == 1 ? 0 : 1;
    b = y == 7 ? 0 : 1;
    c = z;
    cout << (c + 3 * a + b) % 10;
}