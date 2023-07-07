#include <bits/stdc++.h>

using namespace std;

int sum[100][100];//设成全局变量会把值全部自动设为0。

int main() {
    int n, m;
    cin >> n >> m;
    int dx[] = {0, 1, 0, -1},dy[] = {1, 0, -1, 0};
    int x = 0, y = 0, xy = 0, a, b;
    for (int i = 1; i <= n * m; i++) {
        sum[x][y] = i;
        a = x + dx[xy];
        b = y + dy[xy];
        if (a < 0 || a >= n || b < 0 || b >= m || sum[a][b]) {
            xy = (xy + 1) % 4;
            a = x + dx[xy];
            b = y + dy[xy];
        }
        x = a;
        y = b;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << sum[i][j] << " ";
        cout << "\n";
    }
}