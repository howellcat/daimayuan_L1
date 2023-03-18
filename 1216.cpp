#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i <= n / 10; i++) {
        for (int j = 0; j <= (n - i * 10) / 5; j++)
            for (int k = 0; k <= (n - i * 10 - j * 5) / 1; k++)
                if (i * 10 + j * 5 + k * 1 == n)
                    sum++;
    }
    cout << sum;
    return 0;
}