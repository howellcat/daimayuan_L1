#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    int b[3];
    for (int & i : b) {
        int index1 = 0, index2 = 0;
        for (int j = 0; j < n; j++)
            for (int k = 0; k < m; k++)
                if (a[j][k] > a[index1][index2]) {
                    index1 = j;
                    index2 = k;
                }
        printf("%d\n", a[index1][index2]);
        i = a[index1][index2];
        a[index1][index2] = 0;
    }
    printf("%lld", b[0] + b[1] + b[2]);
}