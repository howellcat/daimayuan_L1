#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    for (int j = 0; j < m; j++) {
        for (int i = n - 1; i + 1 >= 1; i--)
            cout << a[i][j] << " ";
        cout << endl;
    }

}