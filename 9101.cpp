#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, j, t;
    cin >> a >> b;
    t = (b - a * 2) / 2;
    j = a - t;
    cout << j << " " << t;
}