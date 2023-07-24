#include <bits/stdc++.h>

using namespace std;

void max(int a[], int l, int r) {
    int sum = 0;
    for (int i = l - 1; i < r; i++)
        if (a[i] > sum)
            sum = a[i];
    printf("%d\n", sum);
}

void min(int a[], int l, int r) {
    int sum = 2147483647;
    for (int i = l - 1; i < r; i++)
        if (a[i] < sum)
            sum = a[i];
    printf("%d\n", sum);
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int b[m][3];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &b[i][j]);
    for (int i = 0; i < m; i++) {
        if (b[i][0] == 1)
            min(a, b[i][1], b[i][2]);
        if (b[i][0] == 2)
            max(a, b[i][1], b[i][2]);
    }
}