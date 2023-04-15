#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[501], n, sum, ma = -1000;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        for (int j = i; j <= n; j++) {
            sum = 0;
            for (int k = i; k <= j; k++)
                sum += a[k];
                if (sum > ma)
                    ma = sum;
        }
    cout << ma;
}