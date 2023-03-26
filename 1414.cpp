#include <bits/stdc++.h>

using namespace std;

#define max 1001

int main() {
    int n, a[max], b[max];
    cin >> n;
    for (int i = 1; i <= n - 1; i++)
        cin >> a[i - 1];
    for (int i = 1; i <= n; i++)
        b[i - 1] = i;
    for (int i = 1; i <= n - 1; i++) {
        for (int j = 1; j <= n; j++)
            if (a[i - 1] == b[j - 1])
                b[j - 1] = '0';
    }
    for (int i = 1; true; i++)
        if (b[i - 1] != '0') {
            cout << b[i - 1];
            return 0;
        }
}