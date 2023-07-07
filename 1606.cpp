#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    bool flag = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1)
                continue;
            if (a[i - 1][j] > a[i][j] && a[i + 1][j] > a[i][j] &&
                a[i][j - 1] > a[i][j] && a[i][j + 1] > a[i][j]) {
                flag = false;
                break;
            }
        }
    }
    if(flag)
        cout << "Yes";
    else
        cout << "No";
}