#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, a[1001][1001];
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    bool sum = true;
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < m - 1; j++)
            if (a[i + 1][j] < a[i][j])
                sum = false;
    if (sum)
        cout << "Yes";
    else
        cout << "No";
}