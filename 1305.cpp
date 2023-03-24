#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, ma = 0, a, b, c;
    cin >> n;
    for (int i = 1; i <= n / 3; i++)
        for (int j = i; j <= n; j++)
            for (int k = j; k <= n; k++)
                if ((i + j + k == n) && (i * j * k > ma)) {
                    ma = i * j * k;
                    a = i;
                    b = j;
                    c = k;
                }
    cout << a << " " << b << " " << c;
}