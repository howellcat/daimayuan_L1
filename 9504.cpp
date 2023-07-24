#include <bits/stdc++.h>

using namespace std;

int n;
int a[1010][1010];

int main() {
    scanf("%d", &n);
    int max = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    max = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            if (a[i][j] > max)
                max = a[i][j];
            if ((a[i][j] == a[i][j + 1]) &&
                2 * a[i][j] > max)
                max = 2 * a[i][j];
            if ((a[i][j] == a[i + 1][j]) &&
                2 * a[i][j] > max)
                max = 2 * a[i][j];
        }
    printf("%d", max);
}
