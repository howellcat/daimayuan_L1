#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, num = 0;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        if ((i + 1) % 2 == 0) {
            for (int j = m - 1; j > -1; j--,num++)
                a[i][j] = num + 1;
        } else {
            for (int j = 0; j < m; j++,num++)
                a[i][j] = num + 1;
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }
}