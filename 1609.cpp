#include <bits/stdc++.h>

using namespace std;

void sort(int n, int a[101]) {
    for (int i = 0; i < n; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min_index])
                min_index = j;
        }
        if (i != min_index) {
            swap(a[i], a[min_index]);
        }
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n";
}

int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    for (int i = 0; i < n; ++i) {
        sort(m, a[i]);
    }
}
