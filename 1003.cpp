#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, sum = 0, i = 1;
    cin >> n;
    while (i <= 1000000000) {
        sum += n / i % 10;
        i *= 10;
    }
    cout << sum << "\n";
}